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
// be\be_codegen.cpp:277


#include "tao/Policy_ForwardC.h"
#include "tao/CDR.h"

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_CORBA_POLICYLIST_CS_)
#define _CORBA_POLICYLIST_CS_

CORBA::PolicyList::PolicyList (void)
{}

CORBA::PolicyList::PolicyList (
    CORBA::ULong max
  )
  : TAO::unbounded_object_reference_sequence<
        CORBA::Policy, CORBA::Policy_var
      >
    (max)
{}

CORBA::PolicyList::PolicyList (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA::Policy_ptr * buffer,
    CORBA::Boolean release
  )
  : TAO::unbounded_object_reference_sequence<
        CORBA::Policy, CORBA::Policy_var
      >
    (max, length, buffer, release)
{}

CORBA::PolicyList::PolicyList (
    const PolicyList &seq
  )
  : TAO::unbounded_object_reference_sequence<
        CORBA::Policy, CORBA::Policy_var
      >
    (seq)
{}

CORBA::PolicyList::~PolicyList (void)
{}

void CORBA::PolicyList::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  PolicyList * _tao_tmp_pointer =
    static_cast<PolicyList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_CORBA_POLICYTYPESEQ_CS_)
#define _CORBA_POLICYTYPESEQ_CS_

CORBA::PolicyTypeSeq::PolicyTypeSeq (void)
{}

CORBA::PolicyTypeSeq::PolicyTypeSeq (
    CORBA::ULong max
  )
  : TAO::unbounded_value_sequence<
        PolicyType
      >
    (max)
{}

CORBA::PolicyTypeSeq::PolicyTypeSeq (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA::ULong * buffer,
    CORBA::Boolean release
  )
  : TAO::unbounded_value_sequence<
        PolicyType
      >
    (max, length, buffer, release)
{}

CORBA::PolicyTypeSeq::PolicyTypeSeq (
    const PolicyTypeSeq &seq
  )
  : TAO::unbounded_value_sequence<
        PolicyType
      >
    (seq)
{}

CORBA::PolicyTypeSeq::~PolicyTypeSeq (void)
{}

void CORBA::PolicyTypeSeq::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  PolicyTypeSeq * _tao_tmp_pointer =
    static_cast<PolicyTypeSeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_cs.cpp:96

#if !defined _TAO_CDR_OP_CORBA_PolicyList_CPP_
#define _TAO_CDR_OP_CORBA_PolicyList_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::PolicyList &_tao_sequence
  )
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::PolicyList &_tao_sequence
  )
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}

#endif /* _TAO_CDR_OP_CORBA_PolicyList_CPP_ */

// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_cs.cpp:96

#if !defined _TAO_CDR_OP_CORBA_PolicyTypeSeq_CPP_
#define _TAO_CDR_OP_CORBA_PolicyTypeSeq_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::PolicyTypeSeq &_tao_sequence
  )
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::PolicyTypeSeq &_tao_sequence
  )
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}

#endif /* _TAO_CDR_OP_CORBA_PolicyTypeSeq_CPP_ */

// TAO_IDL - Generated from
// be\be_visitor_enum/cdr_op_cs.cpp:51

CORBA::Boolean operator<< (TAO_OutputCDR & strm, CORBA::SetOverrideType _tao_enumerator)
{
  return strm << static_cast<CORBA::ULong> (_tao_enumerator);
}

CORBA::Boolean operator>> (TAO_InputCDR & strm, CORBA::SetOverrideType & _tao_enumerator)
{
  CORBA::ULong _tao_temp = 0;
  CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<CORBA::SetOverrideType> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL
