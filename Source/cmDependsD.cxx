/*============================================================================
  CMake - Cross Platform Makefile Generator
  Copyright 2013-2014 Kitware, Inc.
  Copyright 2013-2014 Trent Forkert

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#include "cmDependsD.h"

#include "cmSystemTools.h"

//----------------------------------------------------------------------------
cmDependsD::cmDependsD(cmLocalGenerator* lg): cmDepends(lg)
{
  this->SetIncludePathFromLanguage("D");
}

//----------------------------------------------------------------------------
cmDependsD::~cmDependsD()
{
}

//----------------------------------------------------------------------------
bool cmDependsD::WriteDependencies(const std::set<std::string>& sources,
                                   const std::string& obj,
                                   std::ostream& makeDepends,
                                   std::ostream& internalDepends)
{
  // Make sure this is a scanning instance.
  if(sources.empty() || sources.begin()->empty())
    {
    cmSystemTools::Error("Cannot scan dependencies without a source file.");
    return false;
    }
  if(obj.empty())
    {
    cmSystemTools::Error("Cannot scan dependencies without an object file.");
    return false;
    }

    std::vector<std::string> cmd;
    cmMakefile* mf = this->LocalGenerator->GetMakefile();
    if(!mf->IsDefinitionSet("CMAKE_D_DEPS_COMMAND"))
      {
      return false;
      }

    // Redirect stdout, stderr
    std::streambuf* cout_buf = std::cout.rdbuf(makeDepends.rdbuf());
    std::stringstream errors;
    std::streambuf* cerr_buf = std::cerr.rdbuf(errors.rdbuf());

    for(std::set<std::string>::iterator src = sources.begin();
        src != sources.end(); ++src)
      {
      std::string cmd_str = mf->GetDefinition("CMAKE_D_DEPS_COMMAND");
      cmSystemTools::ReplaceString(cmd_str, "<OBJECT>", obj.c_str());
      cmSystemTools::ReplaceString(cmd_str, "<SOURCE>", src->c_str());
      cmSystemTools::ExpandListArgument(cmd_str, cmd);

      if(!cmSystemTools::RunSingleCommand(cmd, 0, 0, 0, 0,
                                cmSystemTools::OUTPUT_NORMAL))
        {
        // Restablish stdout, cerr
        std::cout.rdbuf(cout_buf);
        std::cerr.rdbuf(cerr_buf);
        SplitInternalDepends(errors, internalDepends, true);
        return false;
        }
      }

  // Restablish stdout, cerr
  std::cout.rdbuf(cout_buf);
  std::cerr.rdbuf(cerr_buf);
  SplitInternalDepends(errors, internalDepends, false);
  return true;
}

void cmDependsD::SplitInternalDepends(std::stringstream& errors,
                                      std::ostream& internalDepends,
                                      bool error)
{
    std::vector<cmsys::String> lines =
        cmSystemTools::SplitString(errors.str().c_str(), '\n', false);

    std::string errorString = "";

    for(std::vector<cmsys::String>::const_iterator it =
          lines.begin(); it != lines.end(); ++it)
      {
      if(cmSystemTools::StringStartsWith(it->c_str(), "intdeps:"))
        {
        internalDepends << it->substr(8) << std::endl;
        }
      else
        {
        if(it->length() > 0)
          {
          errorString += *it;
          errorString += '\n';
          }
        }
      }

    if(errorString.length() > 0)
      {
      if(error)
        {
        cmSystemTools::Error(errorString.c_str());
        }
      else
        {
        cmSystemTools::Message(errorString.c_str());
        }
      }
}
