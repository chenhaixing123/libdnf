/*
Copyright Contributors to the libdnf project.

This file is part of libdnf: https://github.com/rpm-software-management/libdnf/

Libdnf is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 2.1 of the License, or
(at your option) any later version.

Libdnf is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with libdnf.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef MICRODNF_COMMANDS_ENVIRONMENT_ARGUMENTS_HPP
#define MICRODNF_COMMANDS_ENVIRONMENT_ARGUMENTS_HPP


#include "utils/bgettext/bgettext-lib.h"

#include <libdnf-cli/session.hpp>


namespace microdnf {


class EnvironmentAvailableOption : public libdnf::cli::session::BoolOption {
public:
    explicit EnvironmentAvailableOption(libdnf::cli::session::Command & command)
        : BoolOption(command, "available", '\0', _("Show only available environments."), false) {}
};


class EnvironmentInstalledOption : public libdnf::cli::session::BoolOption {
public:
    explicit EnvironmentInstalledOption(libdnf::cli::session::Command & command)
        : BoolOption(command, "installed", '\0', _("Show only installed environments."), false) {}
};


class EnvironmentSpecArguments : public libdnf::cli::session::StringArgumentList {
public:
    explicit EnvironmentSpecArguments(libdnf::cli::session::Command & command)
        : StringArgumentList(command, "environment-spec", _("Pattern matching environment IDs.")) {}
};


}  // namespace microdnf


#endif  // MICRODNF_COMMANDS_ENVIRONMENT_ARGUMENTS_HPP
