//
// Created by 12131 on 2021/9/4.
//

#include "PromoteMenuDriver.h"
#include "../../controller/amount/AmountControllerDriver.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    PromoteMenuDriver &PromoteMenuDriver::display() {
        cout << "PromoteMenuDriver::display" << endl;
        promoteSalaryMenu.display();
        return *this;
    }

    PromoteMenuDriver &PromoteMenuDriver::action() {
        cout << "PromoteMenuDriver::action" << endl;
        promoteSalaryMenu.action();
        AmountControllerDriver{}
                .display(AmountController{}.get());
        return *this;
    }
}