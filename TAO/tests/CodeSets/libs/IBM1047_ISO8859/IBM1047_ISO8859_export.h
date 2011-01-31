
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl
// ------------------------------
#ifndef IBM1047_ISO8859_EXPORT_H
#define IBM1047_ISO8859_EXPORT_H

#include "ace/config-all.h"

#if defined (TAO_AS_STATIC_LIBS)
#  if !defined (IBM1047_ISO8859_HAS_DLL)
#    define IBM1047_ISO8859_HAS_DLL 0
#  endif /* ! IBM1047_ISO8859_HAS_DLL */
#else
#  if !defined (IBM1047_ISO8859_HAS_DLL)
#    define IBM1047_ISO8859_HAS_DLL 1
#  endif /* ! IBM1047_ISO8859_HAS_DLL */
#endif

#if defined (IBM1047_ISO8859_HAS_DLL) && (IBM1047_ISO8859_HAS_DLL == 1)
#  if defined (IBM1047_ISO8859_BUILD_DLL)
#    define IBM1047_ISO8859_Export ACE_Proper_Export_Flag
#    define IBM1047_ISO8859_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define IBM1047_ISO8859_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* IBM1047_ISO8859_BUILD_DLL */
#    define IBM1047_ISO8859_Export ACE_Proper_Import_Flag
#    define IBM1047_ISO8859_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define IBM1047_ISO8859_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* IBM1047_ISO8859_BUILD_DLL */
#else /* IBM1047_ISO8859_HAS_DLL == 1 */
#  define IBM1047_ISO8859_Export
#  define IBM1047_ISO8859_SINGLETON_DECLARATION(T)
#  define IBM1047_ISO8859_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* IBM1047_ISO8859_HAS_DLL == 1 */

#endif /* IBM1047_ISO8859_EXPORT_H */

// End of auto generated file.