//
// Created by 12131 on 2021/9/4.
//

#include "PromoteSalaryMenu.h"
#include "../impl/SalaryIMPL.h"

namespace employ::custom::menu {
    void PromoteSalaryMenu::action() {
        SalaryIMPL::promote();
    }

    void PromoteSalaryMenu::display() {
        SalaryIMPL::display("promote salary");
    }
}
