// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:291


#include "PortableInterceptorC.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:69

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::Interceptor.

PortableInterceptor::Interceptor_ptr
TAO::Objref_Traits<PortableInterceptor::Interceptor>::duplicate (
    PortableInterceptor::Interceptor_ptr p
  )
{
  return PortableInterceptor::Interceptor::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::Interceptor>::release (
    PortableInterceptor::Interceptor_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::Interceptor_ptr
TAO::Objref_Traits<PortableInterceptor::Interceptor>::nil (void)
{
  return PortableInterceptor::Interceptor::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::Interceptor>::marshal (
    PortableInterceptor::Interceptor_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::Interceptor::Interceptor (void)
{}

PortableInterceptor::Interceptor::~Interceptor (void)
{}

void 
PortableInterceptor::Interceptor::_tao_any_destructor (void *_tao_void_pointer)
{
  Interceptor *_tao_tmp_pointer =
    static_cast<Interceptor *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::Interceptor_ptr
PortableInterceptor::Interceptor::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return Interceptor::_nil ();
    }
  
  Interceptor_ptr proxy =
    dynamic_cast<Interceptor_ptr> (_tao_objref);
  
  return Interceptor::_duplicate (proxy);
}

PortableInterceptor::Interceptor_ptr
PortableInterceptor::Interceptor::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return Interceptor::_nil ();
    }
  
  Interceptor_ptr proxy =
    dynamic_cast<Interceptor_ptr> (_tao_objref);
  
  return Interceptor::_duplicate (proxy);
}

PortableInterceptor::Interceptor_ptr
PortableInterceptor::Interceptor::_duplicate (Interceptor_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::Interceptor::_tao_release (Interceptor_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::Interceptor::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/Interceptor:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::Interceptor::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/Interceptor:1.0";
}

CORBA::Boolean
PortableInterceptor::Interceptor::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from 
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:63

PortableInterceptor::ForwardRequest::ForwardRequest (void)
  : CORBA::UserException (
        "IDL:omg.org/PortableInterceptor/ForwardRequest:1.0",
        "ForwardRequest"
      )
{
}

PortableInterceptor::ForwardRequest::~ForwardRequest (void)
{
}

PortableInterceptor::ForwardRequest::ForwardRequest (const ::PortableInterceptor::ForwardRequest &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
  this->forward = CORBA::Object::_duplicate (_tao_excp.forward.in ());
}

PortableInterceptor::ForwardRequest&
PortableInterceptor::ForwardRequest::operator= (const ::PortableInterceptor::ForwardRequest &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  this->forward = CORBA::Object::_duplicate (_tao_excp.forward.in ());
  return *this;
}

void PortableInterceptor::ForwardRequest::_tao_any_destructor (void *_tao_void_pointer)
{
  ForwardRequest *_tao_tmp_pointer =
    static_cast<ForwardRequest *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

PortableInterceptor::ForwardRequest *
PortableInterceptor::ForwardRequest::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<ForwardRequest *> (_tao_excp);
}

const PortableInterceptor::ForwardRequest *
PortableInterceptor::ForwardRequest::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const ForwardRequest *> (_tao_excp);
}

CORBA::Exception *PortableInterceptor::ForwardRequest::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::PortableInterceptor::ForwardRequest, 0);
  return retval;
}

CORBA::Exception *
PortableInterceptor::ForwardRequest::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::PortableInterceptor::ForwardRequest (*this),
      0
    );
  return result;
}

void PortableInterceptor::ForwardRequest::_raise (void) const
{
  TAO_RAISE (*this);
}

void PortableInterceptor::ForwardRequest::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

void PortableInterceptor::ForwardRequest::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}



// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ctor.cpp:66

PortableInterceptor::ForwardRequest::ForwardRequest (
    const CORBA::Object_ptr  _tao_forward
  )
  : CORBA::UserException (
        "IDL:omg.org/PortableInterceptor/ForwardRequest:1.0",
        "ForwardRequest"
      )
{
  this->forward = CORBA::Object::_duplicate (_tao_forward);
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr PortableInterceptor::ForwardRequest::_tao_type (void) const
{
  return ::PortableInterceptor::_tc_ForwardRequest;
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::Current.

PortableInterceptor::Current_ptr
TAO::Objref_Traits<PortableInterceptor::Current>::duplicate (
    PortableInterceptor::Current_ptr p
  )
{
  return PortableInterceptor::Current::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::Current>::release (
    PortableInterceptor::Current_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::Current_ptr
TAO::Objref_Traits<PortableInterceptor::Current>::nil (void)
{
  return PortableInterceptor::Current::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::Current>::marshal (
    PortableInterceptor::Current_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::Current::Current (void)
{}

PortableInterceptor::Current::~Current (void)
{}

void 
PortableInterceptor::Current::_tao_any_destructor (void *_tao_void_pointer)
{
  Current *_tao_tmp_pointer =
    static_cast<Current *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::Current_ptr
PortableInterceptor::Current::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return Current::_nil ();
    }
  
  Current_ptr proxy =
    dynamic_cast<Current_ptr> (_tao_objref);
  
  return Current::_duplicate (proxy);
}

PortableInterceptor::Current_ptr
PortableInterceptor::Current::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return Current::_nil ();
    }
  
  Current_ptr proxy =
    dynamic_cast<Current_ptr> (_tao_objref);
  
  return Current::_duplicate (proxy);
}

PortableInterceptor::Current_ptr
PortableInterceptor::Current::_duplicate (Current_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::Current::_tao_release (Current_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::Current::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Current:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/Current:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::Current::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/Current:1.0";
}

CORBA::Boolean
PortableInterceptor::Current::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::ClientRequestInfo.

PortableInterceptor::ClientRequestInfo_ptr
TAO::Objref_Traits<PortableInterceptor::ClientRequestInfo>::duplicate (
    PortableInterceptor::ClientRequestInfo_ptr p
  )
{
  return PortableInterceptor::ClientRequestInfo::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::ClientRequestInfo>::release (
    PortableInterceptor::ClientRequestInfo_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::ClientRequestInfo_ptr
TAO::Objref_Traits<PortableInterceptor::ClientRequestInfo>::nil (void)
{
  return PortableInterceptor::ClientRequestInfo::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::ClientRequestInfo>::marshal (
    PortableInterceptor::ClientRequestInfo_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::ClientRequestInfo::ClientRequestInfo (void)
{}

PortableInterceptor::ClientRequestInfo::~ClientRequestInfo (void)
{}

void 
PortableInterceptor::ClientRequestInfo::_tao_any_destructor (void *_tao_void_pointer)
{
  ClientRequestInfo *_tao_tmp_pointer =
    static_cast<ClientRequestInfo *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::ClientRequestInfo_ptr
PortableInterceptor::ClientRequestInfo::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ClientRequestInfo::_nil ();
    }
  
  ClientRequestInfo_ptr proxy =
    dynamic_cast<ClientRequestInfo_ptr> (_tao_objref);
  
  return ClientRequestInfo::_duplicate (proxy);
}

PortableInterceptor::ClientRequestInfo_ptr
PortableInterceptor::ClientRequestInfo::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ClientRequestInfo::_nil ();
    }
  
  ClientRequestInfo_ptr proxy =
    dynamic_cast<ClientRequestInfo_ptr> (_tao_objref);
  
  return ClientRequestInfo::_duplicate (proxy);
}

PortableInterceptor::ClientRequestInfo_ptr
PortableInterceptor::ClientRequestInfo::_duplicate (ClientRequestInfo_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::ClientRequestInfo::_tao_release (ClientRequestInfo_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::ClientRequestInfo::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/RequestInfo:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/ClientRequestInfo:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::ClientRequestInfo::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/ClientRequestInfo:1.0";
}

CORBA::Boolean
PortableInterceptor::ClientRequestInfo::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::ServerRequestInfo.

PortableInterceptor::ServerRequestInfo_ptr
TAO::Objref_Traits<PortableInterceptor::ServerRequestInfo>::duplicate (
    PortableInterceptor::ServerRequestInfo_ptr p
  )
{
  return PortableInterceptor::ServerRequestInfo::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::ServerRequestInfo>::release (
    PortableInterceptor::ServerRequestInfo_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::ServerRequestInfo_ptr
TAO::Objref_Traits<PortableInterceptor::ServerRequestInfo>::nil (void)
{
  return PortableInterceptor::ServerRequestInfo::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::ServerRequestInfo>::marshal (
    PortableInterceptor::ServerRequestInfo_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::ServerRequestInfo::ServerRequestInfo (void)
{}

PortableInterceptor::ServerRequestInfo::~ServerRequestInfo (void)
{}

void 
PortableInterceptor::ServerRequestInfo::_tao_any_destructor (void *_tao_void_pointer)
{
  ServerRequestInfo *_tao_tmp_pointer =
    static_cast<ServerRequestInfo *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::ServerRequestInfo_ptr
PortableInterceptor::ServerRequestInfo::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ServerRequestInfo::_nil ();
    }
  
  ServerRequestInfo_ptr proxy =
    dynamic_cast<ServerRequestInfo_ptr> (_tao_objref);
  
  return ServerRequestInfo::_duplicate (proxy);
}

PortableInterceptor::ServerRequestInfo_ptr
PortableInterceptor::ServerRequestInfo::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ServerRequestInfo::_nil ();
    }
  
  ServerRequestInfo_ptr proxy =
    dynamic_cast<ServerRequestInfo_ptr> (_tao_objref);
  
  return ServerRequestInfo::_duplicate (proxy);
}

PortableInterceptor::ServerRequestInfo_ptr
PortableInterceptor::ServerRequestInfo::_duplicate (ServerRequestInfo_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::ServerRequestInfo::_tao_release (ServerRequestInfo_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::ServerRequestInfo::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/RequestInfo:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/ServerRequestInfo:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::ServerRequestInfo::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/ServerRequestInfo:1.0";
}

CORBA::Boolean
PortableInterceptor::ServerRequestInfo::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::ClientRequestInterceptor.

PortableInterceptor::ClientRequestInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::duplicate (
    PortableInterceptor::ClientRequestInterceptor_ptr p
  )
{
  return PortableInterceptor::ClientRequestInterceptor::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::release (
    PortableInterceptor::ClientRequestInterceptor_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::ClientRequestInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::nil (void)
{
  return PortableInterceptor::ClientRequestInterceptor::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::ClientRequestInterceptor>::marshal (
    PortableInterceptor::ClientRequestInterceptor_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::ClientRequestInterceptor::ClientRequestInterceptor (void)
{}

PortableInterceptor::ClientRequestInterceptor::~ClientRequestInterceptor (void)
{}

void 
PortableInterceptor::ClientRequestInterceptor::_tao_any_destructor (void *_tao_void_pointer)
{
  ClientRequestInterceptor *_tao_tmp_pointer =
    static_cast<ClientRequestInterceptor *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::ClientRequestInterceptor_ptr
PortableInterceptor::ClientRequestInterceptor::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ClientRequestInterceptor::_nil ();
    }
  
  ClientRequestInterceptor_ptr proxy =
    dynamic_cast<ClientRequestInterceptor_ptr> (_tao_objref);
  
  return ClientRequestInterceptor::_duplicate (proxy);
}

PortableInterceptor::ClientRequestInterceptor_ptr
PortableInterceptor::ClientRequestInterceptor::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ClientRequestInterceptor::_nil ();
    }
  
  ClientRequestInterceptor_ptr proxy =
    dynamic_cast<ClientRequestInterceptor_ptr> (_tao_objref);
  
  return ClientRequestInterceptor::_duplicate (proxy);
}

PortableInterceptor::ClientRequestInterceptor_ptr
PortableInterceptor::ClientRequestInterceptor::_duplicate (ClientRequestInterceptor_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::ClientRequestInterceptor::_tao_release (ClientRequestInterceptor_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::ClientRequestInterceptor::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/Interceptor:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/ClientRequestInterceptor:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::ClientRequestInterceptor::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/ClientRequestInterceptor:1.0";
}

CORBA::Boolean
PortableInterceptor::ClientRequestInterceptor::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::ServerRequestInterceptor.

PortableInterceptor::ServerRequestInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::ServerRequestInterceptor>::duplicate (
    PortableInterceptor::ServerRequestInterceptor_ptr p
  )
{
  return PortableInterceptor::ServerRequestInterceptor::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::ServerRequestInterceptor>::release (
    PortableInterceptor::ServerRequestInterceptor_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::ServerRequestInterceptor_ptr
TAO::Objref_Traits<PortableInterceptor::ServerRequestInterceptor>::nil (void)
{
  return PortableInterceptor::ServerRequestInterceptor::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::ServerRequestInterceptor>::marshal (
    PortableInterceptor::ServerRequestInterceptor_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::ServerRequestInterceptor::ServerRequestInterceptor (void)
{}

PortableInterceptor::ServerRequestInterceptor::~ServerRequestInterceptor (void)
{}

void 
PortableInterceptor::ServerRequestInterceptor::_tao_any_destructor (void *_tao_void_pointer)
{
  ServerRequestInterceptor *_tao_tmp_pointer =
    static_cast<ServerRequestInterceptor *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::ServerRequestInterceptor_ptr
PortableInterceptor::ServerRequestInterceptor::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ServerRequestInterceptor::_nil ();
    }
  
  ServerRequestInterceptor_ptr proxy =
    dynamic_cast<ServerRequestInterceptor_ptr> (_tao_objref);
  
  return ServerRequestInterceptor::_duplicate (proxy);
}

PortableInterceptor::ServerRequestInterceptor_ptr
PortableInterceptor::ServerRequestInterceptor::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ServerRequestInterceptor::_nil ();
    }
  
  ServerRequestInterceptor_ptr proxy =
    dynamic_cast<ServerRequestInterceptor_ptr> (_tao_objref);
  
  return ServerRequestInterceptor::_duplicate (proxy);
}

PortableInterceptor::ServerRequestInterceptor_ptr
PortableInterceptor::ServerRequestInterceptor::_duplicate (ServerRequestInterceptor_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::ServerRequestInterceptor::_tao_release (ServerRequestInterceptor_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::ServerRequestInterceptor::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/Interceptor:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/ServerRequestInterceptor:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::ServerRequestInterceptor::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/ServerRequestInterceptor:1.0";
}

CORBA::Boolean
PortableInterceptor::ServerRequestInterceptor::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::PolicyFactory.

PortableInterceptor::PolicyFactory_ptr
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::duplicate (
    PortableInterceptor::PolicyFactory_ptr p
  )
{
  return PortableInterceptor::PolicyFactory::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::release (
    PortableInterceptor::PolicyFactory_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::PolicyFactory_ptr
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::nil (void)
{
  return PortableInterceptor::PolicyFactory::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::PolicyFactory>::marshal (
    PortableInterceptor::PolicyFactory_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

PortableInterceptor::PolicyFactory::PolicyFactory (void)
{}

PortableInterceptor::PolicyFactory::~PolicyFactory (void)
{}

void 
PortableInterceptor::PolicyFactory::_tao_any_destructor (void *_tao_void_pointer)
{
  PolicyFactory *_tao_tmp_pointer =
    static_cast<PolicyFactory *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::PolicyFactory_ptr
PortableInterceptor::PolicyFactory::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return PolicyFactory::_nil ();
    }
  
  PolicyFactory_ptr proxy =
    dynamic_cast<PolicyFactory_ptr> (_tao_objref);
  
  return PolicyFactory::_duplicate (proxy);
}

PortableInterceptor::PolicyFactory_ptr
PortableInterceptor::PolicyFactory::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return PolicyFactory::_nil ();
    }
  
  PolicyFactory_ptr proxy =
    dynamic_cast<PolicyFactory_ptr> (_tao_objref);
  
  return PolicyFactory::_duplicate (proxy);
}

PortableInterceptor::PolicyFactory_ptr
PortableInterceptor::PolicyFactory::_duplicate (PolicyFactory_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::PolicyFactory::_tao_release (PolicyFactory_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::PolicyFactory::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/PolicyFactory:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::PolicyFactory::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/PolicyFactory:1.0";
}

CORBA::Boolean
PortableInterceptor::PolicyFactory::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for PortableInterceptor::ORBInitInfo.

PortableInterceptor::ORBInitInfo_ptr
TAO::Objref_Traits<PortableInterceptor::ORBInitInfo>::duplicate (
    PortableInterceptor::ORBInitInfo_ptr p
  )
{
  return PortableInterceptor::ORBInitInfo::_duplicate (p);
}

void
TAO::Objref_Traits<PortableInterceptor::ORBInitInfo>::release (
    PortableInterceptor::ORBInitInfo_ptr p
  )
{
  CORBA::release (p);
}

PortableInterceptor::ORBInitInfo_ptr
TAO::Objref_Traits<PortableInterceptor::ORBInitInfo>::nil (void)
{
  return PortableInterceptor::ORBInitInfo::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<PortableInterceptor::ORBInitInfo>::marshal (
    PortableInterceptor::ORBInitInfo_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from 
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:63

PortableInterceptor::ORBInitInfo::DuplicateName::DuplicateName (void)
  : CORBA::UserException (
        "IDL:omg.org/PortableInterceptor/ORBInitInfo/DuplicateName:1.0",
        "DuplicateName"
      )
{
}

PortableInterceptor::ORBInitInfo::DuplicateName::~DuplicateName (void)
{
}

PortableInterceptor::ORBInitInfo::DuplicateName::DuplicateName (const ::PortableInterceptor::ORBInitInfo::DuplicateName &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
  this->name = CORBA::string_dup (_tao_excp.name.in ());
}

PortableInterceptor::ORBInitInfo::DuplicateName&
PortableInterceptor::ORBInitInfo::DuplicateName::operator= (const ::PortableInterceptor::ORBInitInfo::DuplicateName &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  this->name = CORBA::string_dup (_tao_excp.name.in ());
  return *this;
}

void PortableInterceptor::ORBInitInfo::DuplicateName::_tao_any_destructor (void *_tao_void_pointer)
{
  DuplicateName *_tao_tmp_pointer =
    static_cast<DuplicateName *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

PortableInterceptor::ORBInitInfo::DuplicateName *
PortableInterceptor::ORBInitInfo::DuplicateName::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<DuplicateName *> (_tao_excp);
}

const PortableInterceptor::ORBInitInfo::DuplicateName *
PortableInterceptor::ORBInitInfo::DuplicateName::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const DuplicateName *> (_tao_excp);
}

CORBA::Exception *PortableInterceptor::ORBInitInfo::DuplicateName::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::PortableInterceptor::ORBInitInfo::DuplicateName, 0);
  return retval;
}

CORBA::Exception *
PortableInterceptor::ORBInitInfo::DuplicateName::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::PortableInterceptor::ORBInitInfo::DuplicateName (*this),
      0
    );
  return result;
}

void PortableInterceptor::ORBInitInfo::DuplicateName::_raise (void) const
{
  TAO_RAISE (*this);
}

void PortableInterceptor::ORBInitInfo::DuplicateName::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void PortableInterceptor::ORBInitInfo::DuplicateName::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}



// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ctor.cpp:66

PortableInterceptor::ORBInitInfo::DuplicateName::DuplicateName (
    const char * _tao_name
  )
  : CORBA::UserException (
        "IDL:omg.org/PortableInterceptor/ORBInitInfo/DuplicateName:1.0",
        "DuplicateName"
      )
{
  this->name = CORBA::string_dup (_tao_name);
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr PortableInterceptor::ORBInitInfo::DuplicateName::_tao_type (void) const
{
  return ::PortableInterceptor::ORBInitInfo::_tc_DuplicateName;
}

// TAO_IDL - Generated from 
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:63

PortableInterceptor::ORBInitInfo::InvalidName::InvalidName (void)
  : CORBA::UserException (
        "IDL:omg.org/PortableInterceptor/ORBInitInfo/InvalidName:1.0",
        "InvalidName"
      )
{
}

PortableInterceptor::ORBInitInfo::InvalidName::~InvalidName (void)
{
}

PortableInterceptor::ORBInitInfo::InvalidName::InvalidName (const ::PortableInterceptor::ORBInitInfo::InvalidName &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

PortableInterceptor::ORBInitInfo::InvalidName&
PortableInterceptor::ORBInitInfo::InvalidName::operator= (const ::PortableInterceptor::ORBInitInfo::InvalidName &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void PortableInterceptor::ORBInitInfo::InvalidName::_tao_any_destructor (void *_tao_void_pointer)
{
  InvalidName *_tao_tmp_pointer =
    static_cast<InvalidName *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

PortableInterceptor::ORBInitInfo::InvalidName *
PortableInterceptor::ORBInitInfo::InvalidName::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<InvalidName *> (_tao_excp);
}

const PortableInterceptor::ORBInitInfo::InvalidName *
PortableInterceptor::ORBInitInfo::InvalidName::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const InvalidName *> (_tao_excp);
}

CORBA::Exception *PortableInterceptor::ORBInitInfo::InvalidName::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::PortableInterceptor::ORBInitInfo::InvalidName, 0);
  return retval;
}

CORBA::Exception *
PortableInterceptor::ORBInitInfo::InvalidName::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::PortableInterceptor::ORBInitInfo::InvalidName (*this),
      0
    );
  return result;
}

void PortableInterceptor::ORBInitInfo::InvalidName::_raise (void) const
{
  TAO_RAISE (*this);
}

void PortableInterceptor::ORBInitInfo::InvalidName::_tao_encode (
    TAO_OutputCDR &
    ACE_ENV_ARG_DECL
  ) const
{
  ACE_THROW (CORBA::MARSHAL ());
}

void PortableInterceptor::ORBInitInfo::InvalidName::_tao_decode (
    TAO_InputCDR &
    ACE_ENV_ARG_DECL
  )
{
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr PortableInterceptor::ORBInitInfo::InvalidName::_tao_type (void) const
{
  return ::PortableInterceptor::ORBInitInfo::_tc_InvalidName;
}

PortableInterceptor::ORBInitInfo::ORBInitInfo (void)
{}

PortableInterceptor::ORBInitInfo::~ORBInitInfo (void)
{}

void 
PortableInterceptor::ORBInitInfo::_tao_any_destructor (void *_tao_void_pointer)
{
  ORBInitInfo *_tao_tmp_pointer =
    static_cast<ORBInitInfo *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

PortableInterceptor::ORBInitInfo_ptr
PortableInterceptor::ORBInitInfo::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ORBInitInfo::_nil ();
    }
  
  ORBInitInfo_ptr proxy =
    dynamic_cast<ORBInitInfo_ptr> (_tao_objref);
  
  return ORBInitInfo::_duplicate (proxy);
}

PortableInterceptor::ORBInitInfo_ptr
PortableInterceptor::ORBInitInfo::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return ORBInitInfo::_nil ();
    }
  
  ORBInitInfo_ptr proxy =
    dynamic_cast<ORBInitInfo_ptr> (_tao_objref);
  
  return ORBInitInfo::_duplicate (proxy);
}

PortableInterceptor::ORBInitInfo_ptr
PortableInterceptor::ORBInitInfo::_duplicate (ORBInitInfo_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableInterceptor::ORBInitInfo::_tao_release (ORBInitInfo_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
PortableInterceptor::ORBInitInfo::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableInterceptor/ORBInitInfo:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* PortableInterceptor::ORBInitInfo::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableInterceptor/ORBInitInfo:1.0";
}

CORBA::Boolean
PortableInterceptor::ORBInitInfo::marshal (TAO_OutputCDR &)
{
  return false;
}

// Hand-crafted.

::CORBA::Policy_ptr
PortableInterceptor::PolicyFactory::_create_policy (CORBA::PolicyType
                                                    ACE_ENV_ARG_DECL)
  ACE_THROW_SPEC ((CORBA::SystemException,
                   CORBA::PolicyError))
{
  ACE_THROW_RETURN (CORBA::PolicyError (CORBA::BAD_POLICY_TYPE),
                    CORBA::Policy::_nil ());
}

// TAO_IDL - Generated from
// c:\ace\latest\ace_wrappers\tao\tao_idl\be\be_visitor_exception/cdr_op_cs.cpp:60

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const PortableInterceptor::ForwardRequest &_tao_aggregate
  )
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      return (
        (strm << _tao_aggregate.forward.in ())
       );
    }
  else
    {
      return false;
    }
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    PortableInterceptor::ForwardRequest &_tao_aggregate
  )
{
  // Demarshal the members.
  return (
    (strm >> _tao_aggregate.forward.out ())
  );
}
