//
// Created by 12131 on 2021/9/4.
//

#include "DemoteSalaryMenuDriver.h"
#include "../../../controller/amount/AmountControllerDriver.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    DemoteSalaryMenuDriver &DemoteSalaryMenuDriver::display() {
        cout << "DemoteSalaryMenuDriver::display" << endl;
        demoteSalaryMenu.display();
        return *this;
    }

    DemoteSalaryMenuDriver &DemoteSalaryMenuDriver::action() {
        cout << "DemoteSalaryMenuDriver::action" << endl;
        demoteSalaryMenu.action();
        AmountControllerDriver{}
                .display(AmountController{}.get());
        return *this;
    }
}