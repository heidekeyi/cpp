//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "DemoteSalaryMenu.h"

namespace employ::custom::menu {
    class DemoteSalaryMenuDriver {
    public:
        DemoteSalaryMenuDriver &display();

        DemoteSalaryMenuDriver &action();

    private:
        DemoteSalaryMenu demoteSalaryMenu;
    };
}


