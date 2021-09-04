//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "HireEmployeeMenu.h"

namespace employ::custom::menu {
    class HireEmployeeMenuDriver {
    public:
        HireEmployeeMenuDriver &display();

        HireEmployeeMenuDriver &action();

    private:
        HireEmployeeMenu hireEmployeeMenu;
    };
}


