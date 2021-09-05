//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "HiringMenu.h"

namespace employ::custom::menu {
    class HiringMenuDriver {
    public:
        HiringMenuDriver &display();

        HiringMenuDriver &action();

    private:
        HiringMenu displayHireEmployeeMenu;
    };
}

