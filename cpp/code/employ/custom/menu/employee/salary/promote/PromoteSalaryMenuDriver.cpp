//
// Created by 12131 on 2021/9/4.
//

#include "PromoteSalaryMenuDriver.h"
#include "../../../../controller/amount/AmountControllerDriver.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    PromoteSalaryMenuDriver &PromoteSalaryMenuDriver::display() {
        cout << "PromoteSalaryMenuDriver::display" << endl;
        promoteSalaryMenu.display();
        return *this;
    }

    PromoteSalaryMenuDriver &PromoteSalaryMenuDriver::action() {
        cout << "PromoteSalaryMenuDriver::action" << endl;
        promoteSalaryMenu.action();
        AmountControllerDriver{}
                .display(AmountController{}.get());
        return *this;
    }
}