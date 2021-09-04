//
// Created by 12131 on 2021/9/4.
//

#include "PromoteSalaryMenuDriver.h"
#include "PromoteSalaryMenu.h"

namespace employ::custom::menu {

    PromoteSalaryMenuDriver &PromoteSalaryMenuDriver::display() {
        PromoteSalaryMenu{}.display();
        return *this;
    }

    PromoteSalaryMenuDriver &PromoteSalaryMenuDriver::action() {
        return *this;
    }
}