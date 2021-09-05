//
// Created by 12131 on 2021/9/4.
//

#include "DemoteMenuDriver.h"
#include "../../controller/amount/AmountControllerDriver.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    DemoteMenuDriver &DemoteMenuDriver::display() {
        cout << "DemoteMenuDriver::display" << endl;
        demoteSalaryMenu.display();
        return *this;
    }

    DemoteMenuDriver &DemoteMenuDriver::action() {
        cout << "DemoteMenuDriver::action" << endl;
        demoteSalaryMenu.action();
        AmountControllerDriver{}
                .display(AmountController{}.get());
        return *this;
    }
}