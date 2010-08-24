# - Macros for generating a summary of enabled/disabled features
#
#    FEATURE_SUMMARY( [FILENAME <file>]
#                     [APPEND]
#                     [VAR <variable_name>]
#                     [DESCRIPTION "Found packages:"]
#                     WHAT (ALL | PACKAGES_FOUND | PACKAGES_NOT_FOUND | ENABLED_FEATURES | DISABLED_FEATURES]
#                 )
#
# The FEATURE_SUMMARY() macro can be used to print information about enabled
# or disabled features or packages of a project.
# By default, only the names of the features/packages will be printed and their
# required version when one was specified. Use SET_FEATURE_INFO() to add more
# useful information, like e.g. a download URL for the respective package.
#
# The WHAT option is the only mandatory option. Here you specify what information
# will be printed:
#    ENABLED_FEATURES: the list of all features and packages which have been found, excluding the QUIET ones
#    DISABLED_FEATURES: the list of all features and packages which have not been found, excluding the QUIET ones
#    PACKAGES_FOUND: the list of all packages which have been found, including the QUIET ones
#    PACKAGES_NOT_FOUND: the list of all packages which have not been found, including the QUIET ones
#    ALL: this will give all packages which have or have not been found
#
# If a FILENAME is given, the information is printed into this file. If APPEND
# is used, it is appended to this file, otherwise the file is overwritten if
# it already existed.
# If the VAR option is used, the information is "printed" into the specified
# variable.
# If FILENAME is not used, the information is printed to the terminal.
# Using the DESCRIPTION option a description or headline can be set which will
# be printed above the actual content.
#
# Example 1, append everything to a file:
#   FEATURE_SUMMARY(WHAT ALL
#                   FILENAME ${CMAKE_BINARY_DIR}/all.log APPEND)
#
# Example 2, print the enabled features into the variable enabledFeaturesText:
#   FEATURE_SUMMARY(WHAT ENABLED_FEATURES
#                   DESCRIPTION "Enabled Features:"
#                   VAR enabledFeaturesText)
#   MESSAGE(STATUS "${enabledFeaturesText}")
#
#
#
#    SET_FEATURE_INFO(NAME DESCRIPTION [URL [COMMENT] ] )
# Use this macro to set up information about the named feature, which can
# then be displayed via FEATURE_SUMMARY() or PRINT_ENABLED/DISABLED_FEATURES().
# This can be done either directly in the Find-module or in the project
# which uses the module after the FIND_PACKAGE() call.
# The features for which information can be set are added automatically by the
# find_package() command. If you want to add additional features, you can add
# them by appending them to the global ENABLED_FEATURES or DISABLED_FEATURES properties.
#
# Example for setting the info for a package:
#   FIND_PACKAGE(LibXml2)
#   SET_FEATURE_INFO(LibXml2 "XML processing library." "http://xmlsoft.org/")
#
#
#    PRINT_ENABLED_FEATURES()
# Does the same as FEATURE_SUMMARY(WHAT ENABLED_FEATURES  DESCRIPTION "Enabled features:")
#
#
#    PRINT_DISABLED_FEATURES()
# Does the same as FEATURE_SUMMARY(WHAT DISABLED_FEATURES  DESCRIPTION "Disabled features:")

#=============================================================================
# Copyright 2007-2009 Kitware, Inc.
#
# Distributed under the OSI-approved BSD License (the "License");
# see accompanying file Copyright.txt for details.
#
# This software is distributed WITHOUT ANY WARRANTY; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the License for more information.
#=============================================================================
# (To distribute this file outside of CMake, substitute the full
#  License text for the above reference.)

INCLUDE(CMakeParseArguments)

FUNCTION(SET_FEATURE_INFO _name _desc)
  SET(_url "${ARGV2}")
  SET(_comment "${ARGV3}")
  SET_PROPERTY(GLOBAL PROPERTY _CMAKE_${_name}_DESCRIPTION "${_desc}" )
  IF(_url MATCHES ".+")
    SET_PROPERTY(GLOBAL PROPERTY _CMAKE_${_name}_URL "${_url}" )
  ENDIF(_url MATCHES ".+")
  IF(_comment MATCHES ".+")
    SET_PROPERTY(GLOBAL PROPERTY _CMAKE_${_name}_COMMENT "${_comment}" )
  ENDIF(_comment MATCHES ".+")
ENDFUNCTION(SET_FEATURE_INFO)


FUNCTION(_FS_GET_FEATURE_SUMMARY _property _var)
  SET(_currentFeatureText "")
  GET_PROPERTY(_EnabledFeatures  GLOBAL PROPERTY ${_property})
  FOREACH(_currentFeature ${_EnabledFeatures})
    SET(_currentFeatureText "${_currentFeatureText}\n${_currentFeature}")
    GET_PROPERTY(_info  GLOBAL PROPERTY _CMAKE_${_currentFeature}_REQUIRED_VERSION)
    IF(_info)
      SET(_currentFeatureText "${_currentFeatureText} (required version ${_info})")
    ENDIF(_info)
    GET_PROPERTY(_info  GLOBAL PROPERTY _CMAKE_${_currentFeature}_DESCRIPTION)
    IF(_info)
      SET(_currentFeatureText "${_currentFeatureText} , ${_info}")
    ENDIF(_info)
    GET_PROPERTY(_info  GLOBAL PROPERTY _CMAKE_${_currentFeature}_URL)
    IF(_info)
      SET(_currentFeatureText "${_currentFeatureText} , <${_info}>")
    ENDIF(_info)
    GET_PROPERTY(_info  GLOBAL PROPERTY _CMAKE_${_currentFeature}_COMMENT)
    IF(_info)
      SET(_currentFeatureText "${_currentFeatureText} , ${_info}")
    ENDIF(_info)
  ENDFOREACH(_currentFeature)
  SET(${_var} "${_currentFeatureText}" PARENT_SCOPE)
ENDFUNCTION(_FS_GET_FEATURE_SUMMARY)


FUNCTION(PRINT_ENABLED_FEATURES)
  FEATURE_SUMMARY(WHAT ENABLED_FEATURES  DESCRIPTION "Enabled features:")
ENDFUNCTION(PRINT_ENABLED_FEATURES)


FUNCTION(PRINT_DISABLED_FEATURES)
  FEATURE_SUMMARY(WHAT DISABLED_FEATURES  DESCRIPTION "Disabled features:")
ENDFUNCTION(PRINT_DISABLED_FEATURES)



FUNCTION(FEATURE_SUMMARY)
# CMAKE_PARSE_ARGUMENTS(<prefix> <options> <one_value_keywords> <multi_value_keywords> args...)
  SET(options APPEND)
  SET(oneValueArgs FILENAME VAR DESCRIPTION WHAT)
  SET(multiValueArgs ) # none

  CMAKE_PARSE_ARGUMENTS(_FS "${options}" "${oneValueArgs}" "${multiValueArgs}"  ${_FIRST_ARG} ${ARGN})

  IF(_FS_UNPARSED_ARGUMENTS)
    MESSAGE(FATAL_ERROR "Unknown keywords given to FEATURE_SUMMARY(): \"${_FS_UNPARSED_ARGUMENTS}\"")
  ENDIF(_FS_UNPARSED_ARGUMENTS)

  IF(NOT _FS_WHAT)
    MESSAGE(FATAL_ERROR "The call to FEATURE_SUMMAY() doesn't set the required WHAT argument.")
  ENDIF(NOT _FS_WHAT)

  IF(   "${_FS_WHAT}" STREQUAL "ENABLED_FEATURES"
     OR "${_FS_WHAT}" STREQUAL "DISABLED_FEATURES"
     OR "${_FS_WHAT}" STREQUAL "PACKAGES_FOUND"
     OR "${_FS_WHAT}" STREQUAL "PACKAGES_NOT_FOUND")
    _FS_GET_FEATURE_SUMMARY( ${_FS_WHAT} _featureSummary)
  ELSEIF("${_FS_WHAT}" STREQUAL "ALL")
    _FS_GET_FEATURE_SUMMARY( PACKAGES_FOUND _tmp1)
    _FS_GET_FEATURE_SUMMARY( PACKAGES_NOT_FOUND _tmp2)
    SET(_featureSummary "${_tmp1}${_tmp2}")
  ELSE()
    MESSAGE(FATAL_ERROR "The WHAT argument of FEATURE_SUMMARY() is set to ${_FS_WHAT}, which is not a valid value.")
  ENDIF()

  SET(_fullText "${_FS_DESCRIPTION}${_featureSummary}\n")

  IF(_FS_FILENAME)
    IF(_FS_APPEND)
      FILE(WRITE  "${_FS_FILENAME}" "${_fullText}")
    ELSE(_FS_APPEND)
      FILE(APPEND "${_FS_FILENAME}" "${_fullText}")
    ENDIF(_FS_APPEND)

  ELSE(_FS_FILENAME)
    IF(NOT _FS_VAR)
      MESSAGE(STATUS "${_fullText}")
    ENDIF(NOT _FS_VAR)
  ENDIF(_FS_FILENAME)

  IF(_FS_VAR)
    SET(${_FS_VAR} "${_fullText}" PARENT_SCOPE)
  ENDIF(_FS_VAR)

ENDFUNCTION(FEATURE_SUMMARY)
