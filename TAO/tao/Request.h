// This may look like C, but it's really -*- C++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO
//
// = FILENAME
//    Request.h
//
// = DESCRIPTION
//    Header file for CORBA's Dynamic Invocation Interface "Request"
//    type.
//
// = AUTHOR
//     Copyright 1994-1995 by Sun Microsystems, Inc.
//     Additions and RequestSeq by Jeff Parsons <parsons@cs.wustl.edu>
//
// ============================================================================

#ifndef TAO_REQUEST_H
#define TAO_REQUEST_H
#include "ace/pre.h"

#include "tao/orbconf.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if !defined (TAO_HAS_MINIMUM_CORBA)

#include "tao/corbafwd.h"
#include "tao/ORB.h"
#include "tao/NVList.h"
#include "tao/Environment.h"
#include "tao/Context.h"
#include "tao/Sequence.h"
#include "tao/MessagingC.h"

class TAO_Export CORBA_Request
{
  // = TITLE
  //   CORBA_Request
  //
  // = DESCRIPTION
  //   Provides a way to create requests and populate it with parameters for
  //   use in the Dynamic Invocation Interface
  //
public:
  CORBA::Object_ptr target (void) const;
  // Return the target of this request.

  const CORBA::Char *operation (void) const;
  // Return the operation name for the request.

  CORBA::NVList_ptr arguments (void);
  // Return the arguments for the request.

  CORBA::NamedValue_ptr result (void);
  // Return the result for the request.

  CORBA::ExceptionList_ptr exceptions (void);
  // Return the exceptions resulting from this request.

  CORBA::Context_ptr ctx (void) const;
  // Accessor for the Context member.

  void ctx (CORBA::Context_ptr);
  // Mutator for the Context member.

  CORBA::ContextList_ptr contexts (void);
  // Return a list of the request's result's contexts. Since
  // TAO does not implement Contexts, this will always be 0.

  CORBA::Environment_ptr env (void);
  // Return the <Environment> for this request.

  // Argument manipulation helper functions.

  // Arg adders, one for each type of parameter,
  // with and without optional name. Returns
  // reference to Any for insertion using <<=.
  CORBA_Any &add_in_arg (void);
  CORBA_Any &add_in_arg (const char* name);
  CORBA_Any &add_inout_arg (void);
  CORBA_Any &add_inout_arg (const char* name);
  CORBA_Any &add_out_arg (void);
  CORBA_Any &add_out_arg (const char* name);
  // Initialize the return type.
  void set_return_type (CORBA::TypeCode_ptr tc);
  // Returns reference to Any for extraction using >>=.
  CORBA_Any &return_value (void);

  void invoke (CORBA::Environment &ACE_TRY_ENV =
                 CORBA::Environment::default_environment ());
  // Perform method resolution and invoke an appropriate method. If
  // the method returns successfully, its result is placed in the
  // result argument specified on <create_request>. The behavior is
  // undefined if this <Request> has already been used with a previous
  // call to <invoke>, <send>, or <send_multiple_requests>.

  // A default argument is set, but please note that this not recommended
  // as the user may not be able to propagate the exceptions

  void send_oneway (CORBA::Environment &ACE_TRY_ENV =
                      CORBA::Environment::default_environment ());
  // Send a oneway request.
  // A default argument is set, but please note that this not recommended
  // as the user may not be able to propagate the exceptions.

  // The 'deferred synchronous' methods.
  void send_deferred (CORBA::Environment &ACE_TRY_ENV =
                        CORBA::Environment::default_environment ());
  void get_response (CORBA::Environment &ACE_TRY_ENV =
                      CORBA::Environment::default_environment ());
  CORBA::Boolean poll_response (CORBA::Environment &ACE_TRY_ENV =
                                  CORBA::Environment::default_environment ());

  // Callback method for deferred synchronous requests.
  void handle_response (TAO_InputCDR &incoming,
                        CORBA::ULong reply_status,
                        CORBA::Environment &ACE_TRY_ENV =
                          CORBA::Environment::default_environment ());   
                          
  // Pseudo object methods
  static CORBA_Request* _duplicate (CORBA_Request*);
  static CORBA_Request* _nil (void);

  // = Reference counting.
  CORBA::ULong _incr_refcnt (void);
  CORBA::ULong _decr_refcnt (void);

  void _tao_lazy_evaluation (int lazy_evaluation);
  // Set the lazy evaluation flag

#if !defined(__GNUC__) || __GNUC__ > 2 || __GNUC_MINOR__ >= 8
  typedef CORBA_Request_ptr _ptr_type;
  typedef CORBA_Request_var _var_type;
#endif /* __GNUC__ */
  // Useful for template programming.

private:
  friend class CORBA_Object;

  // following are not allowed

  CORBA_Request (CORBA::Object_ptr obj,
                 CORBA::ORB_ptr orb,
                 const CORBA::Char *op,
                 CORBA::NVList_ptr args,
                 CORBA::NamedValue_ptr result,
                 CORBA::Flags flags,
                 CORBA::Environment &ACE_TRY_ENV =
                   TAO_default_environment ());

  CORBA_Request (CORBA::Object_ptr obj,
                 CORBA::ORB_ptr orb,
                 const CORBA::Char *op,
                 CORBA::Environment &ACE_TRY_ENV =
                   TAO_default_environment ());

  ~CORBA_Request (void);

  CORBA::Object_ptr target_;
  // target object

  CORBA::ORB_var orb_;
  // Pointer to our ORB.

  const CORBA::Char *opname_;
  // operation name

  CORBA::NVList_ptr args_;
  // parameter list

  CORBA::NamedValue_ptr result_;
  // result of the operation

  CORBA::Flags flags_;
  // invocation flags

  CORBA::Environment env_;
  // holds exceptions

  CORBA::ExceptionList exceptions_;
  // list of exceptions raised by the operation

  CORBA::ContextList_ptr contexts_;
  // List of the request's result's contexts.

  CORBA::Context_ptr ctx_;
  // Context associated with this request.

  CORBA::ULong refcount_;
  // reference counting

  ACE_SYNCH_MUTEX lock_;
  // protect the refcount_ and response_receieved_.

  int lazy_evaluation_;
  // If not zero then the NVList is not evaluated by default

  CORBA::Boolean response_received_;
  // Set to TRUE upon completion of invoke() or
  // handle_response().
};

typedef CORBA_Request* CORBA_Request_ptr;

class TAO_Export CORBA_Request_var
{
  // = TITLE
  //   The T_var class for Request
  //
  // = DESCRIPTION
  //   As any other pseudo object Request must have a T_var class,
  //   the interface an semantics are specified in the CORBA spec.
  //
  // = NOTE
  //   We use CORBA_Request_ptr as the _ptr type instead of
  //   CORBA::Request_ptr, this is an attempt to reduced the cyclic
  //   dependencies in TAO.
  //
public:
  CORBA_Request_var (void);
  CORBA_Request_var (CORBA_Request_ptr);
  CORBA_Request_var (const CORBA_Request_var &);
  ~CORBA_Request_var (void);

  CORBA_Request_var &operator= (CORBA_Request_ptr);
  CORBA_Request_var &operator= (const CORBA_Request_var &);
  CORBA_Request_ptr operator-> (void) const;

  operator const CORBA_Request_ptr &() const;
  operator CORBA_Request_ptr &();
  // in, inout, out, _retn
  CORBA_Request_ptr in (void) const;
  CORBA_Request_ptr &inout (void);
  CORBA_Request_ptr &out (void);
  CORBA_Request_ptr _retn (void);
  CORBA_Request_ptr ptr (void) const;

private:
  CORBA_Request_ptr ptr_;
};

class TAO_Export CORBA_Request_out
{
  // = TITLE
  //   The T_out class for Request
  //
  // = DESCRIPTION
  //   As any other pseudo object Request must have a T_out class,
  //   the interface an semantics are specified in the CORBA spec.
  //
  // = NOTE
  //   We use CORBA_Request_ptr as the _ptr type instead of
  //   CORBA::Request_ptr, this is an attempt to reduced the cyclic
  //   dependencies in TAO.
  //
public:
  CORBA_Request_out (CORBA_Request_ptr &);
  CORBA_Request_out (CORBA_Request_var &);
  CORBA_Request_out (CORBA_Request_out &);
  CORBA_Request_out &operator= (CORBA_Request_out &);
  CORBA_Request_out &operator= (const CORBA_Request_var &);
  CORBA_Request_out &operator= (CORBA_Request_ptr);
  operator CORBA_Request_ptr &();
  CORBA_Request_ptr &ptr (void);
  CORBA_Request_ptr operator-> (void);

private:
  CORBA_Request_ptr &ptr_;
};

#if defined (__ACE_INLINE__)
# include "tao/Request.i"
#endif /* __ACE_INLINE__ */

// Make sure you instantiate this in Request.cpp
class CORBA_ORB_RequestSeq : public TAO_Unbounded_Pseudo_Sequence<CORBA_Request,CORBA_Request_var>
{
public:
// Helpful with template programming.
#if !defined(__GNUC__) || __GNUC__ > 2 || __GNUC_MINOR__ >= 8
  typedef CORBA_ORB_RequestSeq_var _var_type;
#endif /* __GNUC__ */

  // Implement the same constructors provided by the template here,
  // check Sequence_T.h for ideas.
  // Simply delegate on the template for the implementation...

  CORBA_ORB_RequestSeq (void);
  // default ctor

  CORBA_ORB_RequestSeq (CORBA::ULong max);
  // Constructor with a "hint" for the maximum capacity.

  CORBA_ORB_RequestSeq (CORBA::ULong maximum,
                        CORBA::ULong length,
                        CORBA_Request* * data,
                        CORBA::Boolean release=0);
  // Constructor with a given buffer.

  CORBA_ORB_RequestSeq (const CORBA_ORB_RequestSeq &);
  // Copy ctor, deep copies.
};

class CORBA_ORB_RequestSeq_var
{
public:
  CORBA_ORB_RequestSeq_var (void); // default constructor
  CORBA_ORB_RequestSeq_var (CORBA_ORB_RequestSeq *);
  CORBA_ORB_RequestSeq_var (const CORBA_ORB_RequestSeq_var &); // copy constructor
  ~CORBA_ORB_RequestSeq_var (void); // destructor

  CORBA_ORB_RequestSeq_var &operator= (CORBA_ORB_RequestSeq *);
  CORBA_ORB_RequestSeq_var &operator= (const CORBA_ORB_RequestSeq_var &);
  CORBA_ORB_RequestSeq *operator-> (void);
  const CORBA_ORB_RequestSeq *operator-> (void) const;

  operator const CORBA_ORB_RequestSeq &() const;
  operator CORBA_ORB_RequestSeq &();
  operator CORBA_ORB_RequestSeq &() const;
  CORBA::Octet &operator[] (CORBA::ULong slot);
  // in, inout, out, _retn
  const CORBA_ORB_RequestSeq &in (void) const;
  CORBA_ORB_RequestSeq &inout (void);
  CORBA_ORB_RequestSeq *&out (void);
  CORBA_ORB_RequestSeq *_retn (void);
  CORBA_ORB_RequestSeq *ptr (void) const;

private:
  CORBA_ORB_RequestSeq *ptr_;
};

class CORBA_ORB_RequestSeq_out
{
public:
  CORBA_ORB_RequestSeq_out (CORBA_ORB_RequestSeq *&);
  CORBA_ORB_RequestSeq_out (CORBA_ORB_RequestSeq_var &);
  CORBA_ORB_RequestSeq_out (CORBA_ORB_RequestSeq_out &);
  CORBA_ORB_RequestSeq_out &operator= (CORBA_ORB_RequestSeq_out &);
  CORBA_ORB_RequestSeq_out &operator= (CORBA_ORB_RequestSeq *);
  operator CORBA_ORB_RequestSeq *&();
  CORBA_ORB_RequestSeq *&ptr (void);
  CORBA_ORB_RequestSeq *operator-> (void);
  CORBA::Octet &operator[] (CORBA::ULong slot);

private:
  CORBA_ORB_RequestSeq *&ptr_;
  // assignment from T_var not allowed
  void operator= (const CORBA_ORB_RequestSeq_var &);
};

#endif /* TAO_HAS_MINIMUM_CORBA */

#include "ace/post.h"
#endif /* TAO_REQUEST_H */
