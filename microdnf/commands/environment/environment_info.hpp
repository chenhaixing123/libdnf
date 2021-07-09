/*
Copyright Contributors to the libdnf project.

This file is part of libdnf: https://github.com/rpm-software-management/libdnf/

Libdnf is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

Libdnf is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with libdnf.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef MICRODNF_COMMANDS_ENVIRONMENT_ENVIRONMENT_INFO_HPP
#define MICRODNF_COMMANDS_ENVIRONMENT_ENVIRONMENT_INFO_HPP

#include "arguments.hpp"

#include <libdnf-cli/session.hpp>

#include <memory>
#include <vector>


namespace microdnf {


class EnvironmentInfoCommand : public libdnf::cli::session::Command {
public:
    explicit EnvironmentInfoCommand(Command & parent);
    void run() override;

    std::unique_ptr<EnvironmentAvailableOption> available{nullptr};
    std::unique_ptr<EnvironmentInstalledOption> installed{nullptr};
    std::unique_ptr<EnvironmentSpecArguments> environment_specs{nullptr};

protected:
    // to be used by an alias command only
    explicit EnvironmentInfoCommand(Command & parent, const std::string & name);
};


}  // namespace microdnf


#endif  // MICRODNF_COMMANDS_ENVIRONMENT_ENVIRONMENT_INFO_HPP
