/* -*- C++ -*- */
// $Id$
// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO ORB and the TAO IDL Compiler have been developed by Washington
// University Computer Science's Distributed Object Computing Group.
//
// Information on TAO is available at
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "tao/CurrentC.h"
#include "tao/Operation_Table.h"
#include "tao/POA_CORBA.h"
#include "tao/Server_Request.h"
#include "tao/Environment.h"
#include "tao/Typecode.h"

ACE_RCSID(tao, CurrentS, "$Id$")

static const TAO_operation_db_entry CORBA_Current_operations [] = {
  {"_is_a", &POA_CORBA::Current::_is_a_skel}
};

static const CORBA::Long _tao_CORBA_Current_optable_size = sizeof (ACE_Hash_Map_Entry<const char *, TAO_Skeleton>) * (3);
static char _tao_CORBA_Current_optable_pool [_tao_CORBA_Current_optable_size];
static ACE_Static_Allocator_Base _tao_CORBA_Current_allocator (_tao_CORBA_Current_optable_pool, _tao_CORBA_Current_optable_size);
TAO_Dynamic_Hash_OpTable tao_CORBA_Current_optable (CORBA_Current_operations, 1, 2, &_tao_CORBA_Current_allocator);
// skeleton constructor
POA_CORBA::Current::Current (void)
{
  this->optable_ = &tao_CORBA_Current_optable;
}

// skeleton destructor
POA_CORBA::Current::~Current (void)
{
}
void POA_CORBA::Current::_is_a_skel (
    CORBA::ServerRequest &_tao_server_request,
    void * _tao_object_reference,
    void * /*context*/,
    CORBA::Environment &_tao_environment
  )
{
  static const TAO_Param_Data_Skel CORBA_Current_is_a_paramdata [] =
  {
    {CORBA::_tc_boolean, 0, 0},
    {CORBA::_tc_string, CORBA::ARG_IN, 0}
  };
  static const TAO_Call_Data_Skel CORBA_Current_is_a_calldata =
  {"_is_a", 1, 2, CORBA_Current_is_a_paramdata};
  //  CORBA::Environment _tao_skel_environment;
  POA_CORBA::Current_ptr  _tao_impl = (POA_CORBA::Current_ptr) _tao_object_reference;
  CORBA::Boolean _tao_retval;
  char *_tao_value = 0;
  _tao_server_request.demarshal (
    _tao_environment,
    &CORBA_Current_is_a_calldata,
    &_tao_retval,
    &_tao_value
  );
  if (_tao_environment.exception () != 0) return;
  _tao_retval = _tao_impl->_is_a (_tao_value, _tao_environment);
  _tao_server_request.marshal (
    _tao_environment,
    //    _tao_skel_environment,
    &CORBA_Current_is_a_calldata,
    &_tao_retval,
    &_tao_value
  );
  CORBA::string_free (_tao_value);
}

CORBA::Boolean POA_CORBA::Current::_is_a (
    const char* value,
    CORBA::Environment &_tao_environment
  )
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:CORBA/Current:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, CORBA::_tc_Object->id (_tao_environment))))
      return 1;
    else
      return 0;
}

void* POA_CORBA::Current::_downcast (
    const char* logical_type_id
  )
{
  if (ACE_OS::strcmp (logical_type_id, "IDL:CORBA/Current:1.0") == 0)
    return ACE_static_cast (POA_CORBA::Current_ptr, this);
  if (ACE_OS::strcmp (logical_type_id, "IDL:omg.org/CORBA/Object:1.0") == 0)
    return ACE_static_cast(PortableServer::Servant, this);
  return 0;
}

void POA_CORBA::Current::_dispatch (CORBA::ServerRequest &req, void *context, CORBA::Environment &env)
{
  TAO_Skeleton skel; // pointer to skeleton for operation
  const char *opname = req.operation (); // retrieve operation name
  // find the skeleton corresponding to this opname
  if (this->_find (opname, skel) == -1)
  {
    env.exception (new CORBA_BAD_OPERATION ());
    ACE_ERROR ((LM_ERROR, "Bad operation <%s>\n", opname));
  }
else
    skel (req, this, context, env);
}

const char* POA_CORBA::Current::_interface_repository_id (void) const
{
  return "IDL:CORBA/Current:1.0";
}

POA_CORBA::_tao_collocated_Current::_tao_collocated_Current (
    POA_CORBA::Current_ptr  servant,
    TAO_Stub *stub
  )
  : CORBA_Current (stub, servant, 1),
    CORBA_Object (stub, servant, 1),
    servant_ (servant)
{
}

POA_CORBA::Current_ptr POA_CORBA::_tao_collocated_Current::_get_servant (void) const
{
  return this->servant_;
}

CORBA::Boolean POA_CORBA::_tao_collocated_Current::_is_a (
    const char* logical_type_id,
    CORBA::Environment &_tao_environment
  )
{
  return this->servant_->_is_a (
      logical_type_id,
      _tao_environment
    );
}


CORBA::Current*
POA_CORBA::Current::_this (CORBA_Environment &TAO_IN_ENV)
{
  TAO_Stub *stub = this->_create_stub (TAO_IN_ENV);
  if (TAO_IN_ENV.exception () != 0)
    return 0;
  return new POA_CORBA::_tao_collocated_Current (this, stub);
}
