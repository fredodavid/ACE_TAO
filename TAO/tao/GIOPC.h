/* -*- C++ -*- $Id$ */


// ================================================================
//
// = LIBRARY
//   TAO
//
// = FILENAME
//   GIOPC.h
//
// = DESCRIPTION
//   Generated from GIOP1_2.pidl, that contains a part of the new data
//   type definitions for GIOP1.2 module.
//   The code was generated by the IDL compiler and then hand-crafted
//   to reduce the includes interdependencies.
//   hand crafted by Balachandran Natarajan <bala@cs.wustl.edu>
// ================================================================
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

// Readers Note:
// This file is named GIOPC.h intentionally. Shortly the file GIOP.h
// in $TAO_ROOT/ta would dissappear giving way to new files once the
// pluggable messaging stuff is done. So I would assume that there
// should be no such name clashes.

#ifndef _TAO_IDL_GIOPC_H_
#define _TAO_IDL_GIOPC_H_
#include "ace/pre.h"

#include "tao/corbafwd.h"
#include "tao/IOPC.h"
#include "tao/Union.h"
#include "tao/Object_KeyC.h"

#if defined (ACE_HAS_MINIMUM_IOSTREAMH_INCLUSION)
#include "ace/streams.h"
#endif /* ACE_HAS_MINIMUM_IOSTREAMH_INCLUSION */

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

TAO_NAMESPACE  GIOP
{
  typedef CORBA::Short AddressingDisposition;
  typedef CORBA::Short_out AddressingDisposition_out;
    TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_AddressingDisposition;

  TAO_NAMESPACE_STORAGE_CLASS const CORBA::Short KeyAddr;

  TAO_NAMESPACE_STORAGE_CLASS const CORBA::Short ProfileAddr;

  TAO_NAMESPACE_STORAGE_CLASS const CORBA::Short ReferenceAddr;

  struct IORAddressingInfo;
  class IORAddressingInfo_var;

  struct TAO_Export IORAddressingInfo
  {

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef IORAddressingInfo_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */
    static void _tao_any_destructor (void*);

    CORBA::ULong selected_profile_index;
    IOP::IOR ior;
  };

  class TAO_Export IORAddressingInfo_var
  {
  public:
    IORAddressingInfo_var (void); // default constructor
    IORAddressingInfo_var (IORAddressingInfo *);
    IORAddressingInfo_var (const IORAddressingInfo_var &); // copy constructor
    ~IORAddressingInfo_var (void); // destructor

    IORAddressingInfo_var &operator= (IORAddressingInfo *);
    IORAddressingInfo_var &operator= (const IORAddressingInfo_var &);
    IORAddressingInfo *operator-> (void);
    const IORAddressingInfo *operator-> (void) const;

    operator const IORAddressingInfo &() const;
    operator IORAddressingInfo &();
    operator IORAddressingInfo &() const;
    // in, inout, out, _retn
    const IORAddressingInfo &in (void) const;
    IORAddressingInfo &inout (void);
    IORAddressingInfo *&out (void);
    IORAddressingInfo *_retn (void);
    IORAddressingInfo *ptr (void) const;

  private:
    IORAddressingInfo *ptr_;
  };

  class TAO_Export IORAddressingInfo_out
  {
  public:
    IORAddressingInfo_out (IORAddressingInfo *&);
    IORAddressingInfo_out (IORAddressingInfo_var &);
    IORAddressingInfo_out (const IORAddressingInfo_out &);
    IORAddressingInfo_out &operator= (const IORAddressingInfo_out &);
    IORAddressingInfo_out &operator= (IORAddressingInfo *);
    operator IORAddressingInfo *&();
    IORAddressingInfo *&ptr (void);
    IORAddressingInfo *operator-> (void);

  private:
    IORAddressingInfo *&ptr_;
    // assignment from T_var not allowed
    void operator= (const IORAddressingInfo_var &);
  };

  TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_IORAddressingInfo;


  class TargetAddress;
  class TargetAddress_var;
  
  class TAO_Export TargetAddress: public TAO_Base_Union 
  {
  public:
    TargetAddress (void); // default constructor
    TargetAddress (const TargetAddress &); // copy constructor
    ~TargetAddress (void); // destructor
    TargetAddress &operator= (const TargetAddress &); // copy constructor

    void _d (CORBA::Short);
    CORBA::Short _d (void) const;

#if !defined(__GNUC__) || !defined (ACE_HAS_GNUG_PRE_2_8)
    typedef TargetAddress_var _var_type;
#endif /* ! __GNUC__ || g++ >= 2.8 */
    static void _tao_any_destructor (void*);


    void object_key (const TAO_ObjectKey &);// set
    const TAO_ObjectKey &object_key (void) const; // get method (read only)
    TAO_ObjectKey &object_key (void); // get method (read/write only)

    void profile (const IOP::TaggedProfile &);// set
    const IOP::TaggedProfile &profile (void) const; // get method (read only)
    IOP::TaggedProfile &profile (void); // get method (read/write only)

    void ior (const ACE_NESTED_CLASS (GIOP, IORAddressingInfo) &);// set
    const ACE_NESTED_CLASS (GIOP, IORAddressingInfo) &ior (void) const; // get method (read only)
    ACE_NESTED_CLASS (GIOP, IORAddressingInfo) &ior (void); // get method (read/write only)

    void _default ();
  private:
    CORBA::Short disc_;
    union
    {
      TAO_ObjectKey *object_key_;
      IOP::TaggedProfile *profile_;
      ACE_NESTED_CLASS (GIOP, IORAddressingInfo) *ior_;
    } u_; // end of union
  // TAO extensions
  void _reset (CORBA::Short, CORBA::Boolean);
  // Frees any allocated storage

  virtual void *_discriminant (void);
  // returns pointer to the discriminant

  virtual void _reset (void);
  // calls the above reset with finalize=1

  virtual void *_access (CORBA::Boolean flag);
  // accesses the right data member. Also will allocate on TRUE flag

}; // GIOP::TargetAddress

TAO_NAMESPACE_STORAGE_CLASS CORBA::TypeCode_ptr _tc_TargetAddress;

class TAO_Export TargetAddress_var
{
public:
  TargetAddress_var (void); // default constructor
  TargetAddress_var (TargetAddress *);
  TargetAddress_var (const TargetAddress_var &); // copy constructor
  ~TargetAddress_var (void); // destructor

  TargetAddress_var &operator= (TargetAddress *);
  TargetAddress_var &operator= (const TargetAddress_var &);
  TargetAddress *operator-> (void);
  const TargetAddress *operator-> (void) const;

  operator const TargetAddress &() const;
  operator TargetAddress &();
  operator TargetAddress &() const;
  // in, inout, out, _retn
  const TargetAddress &in (void) const;
  TargetAddress &inout (void);
  TargetAddress *&out (void);
  TargetAddress *_retn (void);
  TargetAddress *ptr(void) const;

private:
  TargetAddress *ptr_;
};

class TAO_Export TargetAddress_out
{
public:
  TargetAddress_out (TargetAddress *&);
  TargetAddress_out (TargetAddress_var &);
  TargetAddress_out (const TargetAddress_out &);
  TargetAddress_out &operator= (const TargetAddress_out &);
  TargetAddress_out &operator= (TargetAddress *);
  operator TargetAddress *&();
  TargetAddress *&ptr (void);
  TargetAddress *operator-> (void);

private:
  TargetAddress *&ptr_;
  // assignment from T_var not allowed
  void operator= (const TargetAddress_var &);
};


}
TAO_NAMESPACE_CLOSE // module GIOP

TAO_Export void operator<<= (CORBA::Any &,
                             const GIOP::IORAddressingInfo &); // copying version
TAO_Export void operator<<= (CORBA::Any &,
                             GIOP::IORAddressingInfo*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &,
                                       GIOP::IORAddressingInfo *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &,
                                       const GIOP::IORAddressingInfo *&);
TAO_Export void operator<<= (CORBA::Any &,
                             const GIOP::TargetAddress &); // copying version
TAO_Export void operator<<= (CORBA::Any &,
                             GIOP::TargetAddress*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &,
                                       GIOP::TargetAddress *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &,
                                       const GIOP::TargetAddress *&);

#ifndef __ACE_INLINE__

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const GIOP::IORAddressingInfo &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, GIOP::IORAddressingInfo &);
TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const GIOP::TargetAddress &); //
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, GIOP::TargetAddress &);

#endif /* __ACE_INLINE__ */


#if defined (__ACE_INLINE__)
#include "GIOPC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#include "ace/post.h"
#endif /* ifndef */
