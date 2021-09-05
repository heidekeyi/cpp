//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "HireMenu.h"

namespace employ::custom::menu {
    class HireMenuDriver {
    public:
        HireMenuDriver &display();

        HireMenuDriver &action();

    private:
        HireMenu hireEmployeeMenu;
    };
}


