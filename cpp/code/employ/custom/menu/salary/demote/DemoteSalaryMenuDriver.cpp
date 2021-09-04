//
// Created by 12131 on 2021/9/4.
//

#include "DemoteSalaryMenuDriver.h"
#include "DemoteSalaryMenu.h"

namespace employ::custom::menu {

    DemoteSalaryMenuDriver &DemoteSalaryMenuDriver::display() {
        DemoteSalaryMenu{}.display();
        return *this;
    }

    DemoteSalaryMenuDriver &DemoteSalaryMenuDriver::action() {
        return *this;
    }
}