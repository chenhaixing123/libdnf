#ifndef LIBDNF_MODULE_BASE_HPP
#define LIBDNF_MODULE_BASE_HPP

#include "Sack.hpp"

#include "../base/Base.hpp"



namespace libdnf::module {


/// @replaces dnf:dnf/module/module_base.py:class:ModuleBase
class Base {
public:
    Base(libdnf::Base * dnf_base);

    void get_sack() const;

    void get_goal() const;

protected:
    const libdnf::Base * dnf_base;
};


Base::Base(libdnf::Base * dnf_base)
    : dnf_base{dnf_base}
{
}


}  // namespace libdnf::module


/*
dnf:dnf/module/module_base.py:method:ModuleBase.disable(self, module_specs)
dnf:dnf/module/module_base.py:method:ModuleBase.enable(self, module_specs)
dnf:dnf/module/module_base.py:method:ModuleBase.get_modules(self, module_spec)
dnf:dnf/module/module_base.py:method:ModuleBase.install(self, module_specs, strict=True)
dnf:dnf/module/module_base.py:method:ModuleBase.remove(self, module_specs)
dnf:dnf/module/module_base.py:method:ModuleBase.reset(self, module_specs)
dnf:dnf/module/module_base.py:method:ModuleBase.upgrade(self, module_specs)
*/

#endif
