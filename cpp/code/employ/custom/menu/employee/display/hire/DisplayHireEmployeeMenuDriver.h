//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "DisplayHireEmployeeMenu.h"

namespace employ::custom::menu {
    class DisplayHireEmployeeMenuDriver {
    public:
        DisplayHireEmployeeMenuDriver &display();

        DisplayHireEmployeeMenuDriver &action();

    private:
        DisplayHireEmployeeMenu displayHireEmployeeMenu;
    };
}

