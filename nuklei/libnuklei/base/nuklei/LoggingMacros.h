// (C) Copyright Renaud Detry   2007-2011.
// Distributed under the GNU General Public License. (See accompanying file
// LICENSE.txt or copy at http://www.gnu.org/copyleft/gpl.html)

/** @file */

#ifndef NUKLEI_LOGGING_MACROS_H
#define NUKLEI_LOGGING_MACROS_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! //
// This file is auto-generated by logging_macros.sh //
// Do not edit. !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! //
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! //

#include <nuklei/Log.h>
#include <nuklei/Definitions.h>



#define NUKLEI_FATAL(message) { \
  if (::nuklei::LOG_LEVEL >= 1) {\
  ::std::ostringstream nuklei_logging_local_o_string_stream; \
  nuklei_logging_local_o_string_stream << message; \
  ::nuklei::Log::log(__FILE__, __LINE__, 1, nuklei_logging_local_o_string_stream.str()); }}



#define NUKLEI_ERROR(message) { \
  if (::nuklei::LOG_LEVEL >= 2) {\
  ::std::ostringstream nuklei_logging_local_o_string_stream; \
  nuklei_logging_local_o_string_stream << message; \
  ::nuklei::Log::log(__FILE__, __LINE__, 2, nuklei_logging_local_o_string_stream.str()); }}



#define NUKLEI_WARN(message) { \
  if (::nuklei::LOG_LEVEL >= 3) {\
  ::std::ostringstream nuklei_logging_local_o_string_stream; \
  nuklei_logging_local_o_string_stream << message; \
  ::nuklei::Log::log(__FILE__, __LINE__, 3, nuklei_logging_local_o_string_stream.str()); }}



#define NUKLEI_INFO(message) { \
  if (::nuklei::LOG_LEVEL >= 4) {\
  ::std::ostringstream nuklei_logging_local_o_string_stream; \
  nuklei_logging_local_o_string_stream << message; \
  ::nuklei::Log::log(__FILE__, __LINE__, 4, nuklei_logging_local_o_string_stream.str()); }}



#define NUKLEI_LOG(message) { \
  if (::nuklei::LOG_LEVEL >= 5) {\
  ::std::ostringstream nuklei_logging_local_o_string_stream; \
  nuklei_logging_local_o_string_stream << message; \
  ::nuklei::Log::log(__FILE__, __LINE__, 5, nuklei_logging_local_o_string_stream.str()); }}



#define NUKLEI_DEBUG(message) { \
  if (::nuklei::LOG_LEVEL >= 6) {\
  ::std::ostringstream nuklei_logging_local_o_string_stream; \
  nuklei_logging_local_o_string_stream << message; \
  ::nuklei::Log::log(__FILE__, __LINE__, 6, nuklei_logging_local_o_string_stream.str()); }}



#endif

