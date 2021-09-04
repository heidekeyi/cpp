//
// Created by 12131 on 2021/9/4.
//

#include "DemoteSalaryMenu.h"
#include "../impl/SalaryIMPL.h"

namespace employ::custom::menu {
    void DemoteSalaryMenu::action() {

    }

    void DemoteSalaryMenu::display() {
        SalaryIMPL::display("demote salary");
    }
}