//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "PromoteSalaryMenu.h"

namespace employ::custom::menu {
    class PromoteSalaryMenuDriver {
    public:
        PromoteSalaryMenuDriver &display();

        PromoteSalaryMenuDriver &action();

    private:
        PromoteSalaryMenu promoteSalaryMenu;
    };
}


