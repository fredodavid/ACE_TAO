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

#include "IORManip_Loader.h"
#include "tao/Null_RefCount_Policy.h"
#include "tao/TypeCode_Constants.h"
#include "tao/Alias_TypeCode.h"
#include "tao/Objref_TypeCode.h"
#include "tao/Sequence_TypeCode.h"
#include "tao/Struct_TypeCode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:70

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_TAO_IOP_EmptyProfileList = 0;
static TAO::TypeCode::Struct<char const *,
                             CORBA::TypeCode_ptr const *,
                             TAO::TypeCode::Struct_Field<char const *,
                                                         CORBA::TypeCode_ptr const *> const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_EmptyProfileList (
    CORBA::tk_except,
    "IDL:TAO_IOP/EmptyProfileList:1.0",
    "EmptyProfileList",
    _tao_fields_TAO_IOP_EmptyProfileList,
    0);
  
namespace TAO_IOP
{
  ::CORBA::TypeCode_ptr const _tc_EmptyProfileList =
    &_tao_tc_TAO_IOP_EmptyProfileList;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:70

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_TAO_IOP_NotFound = 0;
static TAO::TypeCode::Struct<char const *,
                             CORBA::TypeCode_ptr const *,
                             TAO::TypeCode::Struct_Field<char const *,
                                                         CORBA::TypeCode_ptr const *> const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_NotFound (
    CORBA::tk_except,
    "IDL:TAO_IOP/NotFound:1.0",
    "NotFound",
    _tao_fields_TAO_IOP_NotFound,
    0);
  
namespace TAO_IOP
{
  ::CORBA::TypeCode_ptr const _tc_NotFound =
    &_tao_tc_TAO_IOP_NotFound;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:70

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_TAO_IOP_Duplicate = 0;
static TAO::TypeCode::Struct<char const *,
                             CORBA::TypeCode_ptr const *,
                             TAO::TypeCode::Struct_Field<char const *,
                                                         CORBA::TypeCode_ptr const *> const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_Duplicate (
    CORBA::tk_except,
    "IDL:TAO_IOP/Duplicate:1.0",
    "Duplicate",
    _tao_fields_TAO_IOP_Duplicate,
    0);
  
namespace TAO_IOP
{
  ::CORBA::TypeCode_ptr const _tc_Duplicate =
    &_tao_tc_TAO_IOP_Duplicate;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:70

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_TAO_IOP_Invalid_IOR = 0;
static TAO::TypeCode::Struct<char const *,
                             CORBA::TypeCode_ptr const *,
                             TAO::TypeCode::Struct_Field<char const *,
                                                         CORBA::TypeCode_ptr const *> const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_Invalid_IOR (
    CORBA::tk_except,
    "IDL:TAO_IOP/Invalid_IOR:1.0",
    "Invalid_IOR",
    _tao_fields_TAO_IOP_Invalid_IOR,
    0);
  
namespace TAO_IOP
{
  ::CORBA::TypeCode_ptr const _tc_Invalid_IOR =
    &_tao_tc_TAO_IOP_Invalid_IOR;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:70

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_TAO_IOP_MultiProfileList = 0;
static TAO::TypeCode::Struct<char const *,
                             CORBA::TypeCode_ptr const *,
                             TAO::TypeCode::Struct_Field<char const *,
                                                         CORBA::TypeCode_ptr const *> const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_MultiProfileList (
    CORBA::tk_except,
    "IDL:TAO_IOP/MultiProfileList:1.0",
    "MultiProfileList",
    _tao_fields_TAO_IOP_MultiProfileList,
    0);
  
namespace TAO_IOP
{
  ::CORBA::TypeCode_ptr const _tc_MultiProfileList =
    &_tao_tc_TAO_IOP_MultiProfileList;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_TAO_IOR_Property (
    "IDL:TAO_IOP/TAO_IOR_Property:1.0",
    "TAO_IOR_Property");
  
namespace TAO_IOP
{
  ::CORBA::TypeCode_ptr const _tc_TAO_IOR_Property =
    &_tao_tc_TAO_IOP_TAO_IOR_Property;
}



// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:31



// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:925


#ifndef _TAO_TYPECODE_TAO_IOP_TAO_IOR_Manipulation_IORList_GUARD
#define _TAO_TYPECODE_TAO_IOP_TAO_IOR_Manipulation_IORList_GUARD
namespace TAO
{
  namespace TypeCode
  {
    TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
      TAO_IOP_TAO_IOR_Manipulation_IORList_0 (
        CORBA::tk_sequence,
        &CORBA::_tc_Object,
        0U);
      
    ::CORBA::TypeCode_ptr const tc_TAO_IOP_TAO_IOR_Manipulation_IORList_0 =
      &TAO_IOP_TAO_IOR_Manipulation_IORList_0;
    
  }
}


#endif /* _TAO_TYPECODE_TAO_IOP_TAO_IOR_Manipulation_IORList_GUARD */
static TAO::TypeCode::Alias<char const *,
                            CORBA::TypeCode_ptr const *,
                            CORBA::tk_alias,
                            TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_TAO_IOR_Manipulation_IORList (
    "IDL:TAO_IOP/TAO_IOR_Manipulation/IORList:1.0",
    "IORList",
    &TAO::TypeCode::tc_TAO_IOP_TAO_IOR_Manipulation_IORList_0);
  
::CORBA::TypeCode_ptr const TAO_IOP::TAO_IOR_Manipulation::_tc_IORList =
  &_tao_tc_TAO_IOP_TAO_IOR_Manipulation_IORList;

// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             CORBA::tk_local_interface,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_IOP_TAO_IOR_Manipulation (
    "IDL:TAO_IOP/TAO_IOR_Manipulation:1.0",
    "TAO_IOR_Manipulation");
  
namespace TAO_IOP
{
  ::CORBA::TypeCode_ptr const _tc_TAO_IOR_Manipulation =
    &_tao_tc_TAO_IOP_TAO_IOR_Manipulation;
}



// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Dual_Impl_T<TAO_IOP::EmptyProfileList>::demarshal_value (
    TAO_InputCDR & cdr
  )
{
  CORBA::String_var id;
  
  if (!(cdr >> id.out ()))
    {
      return false;
    }
  
  ACE_TRY_NEW_ENV
    {
      this->value_->_tao_decode (cdr ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      return false;
    }
  ACE_ENDTRY;
  
  return true;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TAO_IOP::EmptyProfileList &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::EmptyProfileList>::insert_copy (
      _tao_any,
      TAO_IOP::EmptyProfileList::_tao_any_destructor,
      TAO_IOP::_tc_EmptyProfileList,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::EmptyProfileList *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::EmptyProfileList>::insert (
      _tao_any,
      TAO_IOP::EmptyProfileList::_tao_any_destructor,
      TAO_IOP::_tc_EmptyProfileList,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::EmptyProfileList *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const TAO_IOP::EmptyProfileList *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TAO_IOP::EmptyProfileList *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TAO_IOP::EmptyProfileList>::extract (
        _tao_any,
        TAO_IOP::EmptyProfileList::_tao_any_destructor,
        TAO_IOP::_tc_EmptyProfileList,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Dual_Impl_T<TAO_IOP::NotFound>::demarshal_value (
    TAO_InputCDR & cdr
  )
{
  CORBA::String_var id;
  
  if (!(cdr >> id.out ()))
    {
      return false;
    }
  
  ACE_TRY_NEW_ENV
    {
      this->value_->_tao_decode (cdr ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      return false;
    }
  ACE_ENDTRY;
  
  return true;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TAO_IOP::NotFound &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::NotFound>::insert_copy (
      _tao_any,
      TAO_IOP::NotFound::_tao_any_destructor,
      TAO_IOP::_tc_NotFound,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::NotFound *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::NotFound>::insert (
      _tao_any,
      TAO_IOP::NotFound::_tao_any_destructor,
      TAO_IOP::_tc_NotFound,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::NotFound *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const TAO_IOP::NotFound *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TAO_IOP::NotFound *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TAO_IOP::NotFound>::extract (
        _tao_any,
        TAO_IOP::NotFound::_tao_any_destructor,
        TAO_IOP::_tc_NotFound,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Dual_Impl_T<TAO_IOP::Duplicate>::demarshal_value (
    TAO_InputCDR & cdr
  )
{
  CORBA::String_var id;
  
  if (!(cdr >> id.out ()))
    {
      return false;
    }
  
  ACE_TRY_NEW_ENV
    {
      this->value_->_tao_decode (cdr ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      return false;
    }
  ACE_ENDTRY;
  
  return true;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TAO_IOP::Duplicate &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::Duplicate>::insert_copy (
      _tao_any,
      TAO_IOP::Duplicate::_tao_any_destructor,
      TAO_IOP::_tc_Duplicate,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::Duplicate *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::Duplicate>::insert (
      _tao_any,
      TAO_IOP::Duplicate::_tao_any_destructor,
      TAO_IOP::_tc_Duplicate,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::Duplicate *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const TAO_IOP::Duplicate *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TAO_IOP::Duplicate *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TAO_IOP::Duplicate>::extract (
        _tao_any,
        TAO_IOP::Duplicate::_tao_any_destructor,
        TAO_IOP::_tc_Duplicate,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Dual_Impl_T<TAO_IOP::Invalid_IOR>::demarshal_value (
    TAO_InputCDR & cdr
  )
{
  CORBA::String_var id;
  
  if (!(cdr >> id.out ()))
    {
      return false;
    }
  
  ACE_TRY_NEW_ENV
    {
      this->value_->_tao_decode (cdr ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      return false;
    }
  ACE_ENDTRY;
  
  return true;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TAO_IOP::Invalid_IOR &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::Invalid_IOR>::insert_copy (
      _tao_any,
      TAO_IOP::Invalid_IOR::_tao_any_destructor,
      TAO_IOP::_tc_Invalid_IOR,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::Invalid_IOR *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::Invalid_IOR>::insert (
      _tao_any,
      TAO_IOP::Invalid_IOR::_tao_any_destructor,
      TAO_IOP::_tc_Invalid_IOR,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::Invalid_IOR *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const TAO_IOP::Invalid_IOR *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TAO_IOP::Invalid_IOR *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TAO_IOP::Invalid_IOR>::extract (
        _tao_any,
        TAO_IOP::Invalid_IOR::_tao_any_destructor,
        TAO_IOP::_tc_Invalid_IOR,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Dual_Impl_T<TAO_IOP::MultiProfileList>::demarshal_value (
    TAO_InputCDR & cdr
  )
{
  CORBA::String_var id;
  
  if (!(cdr >> id.out ()))
    {
      return false;
    }
  
  ACE_TRY_NEW_ENV
    {
      this->value_->_tao_decode (cdr ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      return false;
    }
  ACE_ENDTRY;
  
  return true;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TAO_IOP::MultiProfileList &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::MultiProfileList>::insert_copy (
      _tao_any,
      TAO_IOP::MultiProfileList::_tao_any_destructor,
      TAO_IOP::_tc_MultiProfileList,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::MultiProfileList *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::MultiProfileList>::insert (
      _tao_any,
      TAO_IOP::MultiProfileList::_tao_any_destructor,
      TAO_IOP::_tc_MultiProfileList,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::MultiProfileList *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const TAO_IOP::MultiProfileList *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TAO_IOP::MultiProfileList *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TAO_IOP::MultiProfileList>::extract (
        _tao_any,
        TAO_IOP::MultiProfileList::_tao_any_destructor,
        TAO_IOP::_tc_MultiProfileList,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Property>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return true;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Property>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Property>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Property_ptr _tao_elem
  )
{
  TAO_IOP::TAO_IOR_Property_ptr _tao_objptr =
    TAO_IOP::TAO_IOR_Property::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Property_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Property>::insert (
      _tao_any,
      TAO_IOP::TAO_IOR_Property::_tao_any_destructor,
      TAO_IOP::_tc_TAO_IOR_Property,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Property_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Property>::extract (
        _tao_any,
        TAO_IOP::TAO_IOR_Property::_tao_any_destructor,
        TAO_IOP::_tc_TAO_IOR_Property,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

template<>
CORBA::Boolean
TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Manipulation>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return true;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Manipulation>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Manipulation>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Manipulation_ptr _tao_elem
  )
{
  TAO_IOP::TAO_IOR_Manipulation_ptr _tao_objptr =
    TAO_IOP::TAO_IOR_Manipulation::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Manipulation_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Manipulation>::insert (
      _tao_any,
      TAO_IOP::TAO_IOR_Manipulation::_tao_any_destructor,
      TAO_IOP::_tc_TAO_IOR_Manipulation,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Manipulation_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<TAO_IOP::TAO_IOR_Manipulation>::extract (
        _tao_any,
        TAO_IOP::TAO_IOR_Manipulation::_tao_any_destructor,
        TAO_IOP::_tc_TAO_IOR_Manipulation,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_sequence/any_op_cs.cpp:54



template<>
CORBA::Boolean
TAO::Any_Dual_Impl_T<TAO_IOP::TAO_IOR_Manipulation::IORList>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

template<>
CORBA::Boolean
TAO::Any_Dual_Impl_T<TAO_IOP::TAO_IOR_Manipulation::IORList>::demarshal_value (TAO_InputCDR &)
{
  return false;
}// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const TAO_IOP::TAO_IOR_Manipulation::IORList &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::TAO_IOR_Manipulation::IORList>::insert_copy (
      _tao_any,
      TAO_IOP::TAO_IOR_Manipulation::IORList::_tao_any_destructor,
      TAO::TypeCode::tc_TAO_IOP_TAO_IOR_Manipulation_IORList_0,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Manipulation::IORList *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO_IOP::TAO_IOR_Manipulation::IORList>::insert (
      _tao_any,
      TAO_IOP::TAO_IOR_Manipulation::IORList::_tao_any_destructor,
      TAO::TypeCode::tc_TAO_IOP_TAO_IOR_Manipulation_IORList_0,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    TAO_IOP::TAO_IOR_Manipulation::IORList *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const TAO_IOP::TAO_IOR_Manipulation::IORList *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const TAO_IOP::TAO_IOR_Manipulation::IORList *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TAO_IOP::TAO_IOR_Manipulation::IORList>::extract (
        _tao_any,
        TAO_IOP::TAO_IOR_Manipulation::IORList::_tao_any_destructor,
        TAO::TypeCode::tc_TAO_IOP_TAO_IOR_Manipulation_IORList_0,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        TAO_IOP::EmptyProfileList
      >;

  template class
    TAO::Any_Dual_Impl_T<
        TAO_IOP::NotFound
      >;

  template class
    TAO::Any_Dual_Impl_T<
        TAO_IOP::Duplicate
      >;

  template class
    TAO::Any_Dual_Impl_T<
        TAO_IOP::Invalid_IOR
      >;

  template class
    TAO::Any_Dual_Impl_T<
        TAO_IOP::MultiProfileList
      >;

  template class
    TAO::Any_Impl_T<
        TAO_IOP::TAO_IOR_Property
      >;

  template class
    TAO::Any_Dual_Impl_T<
        TAO_IOP::TAO_IOR_Manipulation::IORList
      >;

  template class
    TAO::Any_Impl_T<
        TAO_IOP::TAO_IOR_Manipulation
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TAO_IOP::EmptyProfileList \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TAO_IOP::NotFound \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TAO_IOP::Duplicate \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TAO_IOP::Invalid_IOR \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TAO_IOP::MultiProfileList \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        TAO_IOP::TAO_IOR_Property \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        TAO_IOP::TAO_IOR_Manipulation::IORList \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        TAO_IOP::TAO_IOR_Manipulation \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
