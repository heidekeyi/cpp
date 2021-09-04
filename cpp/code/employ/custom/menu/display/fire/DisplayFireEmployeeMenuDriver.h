//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "DisplayFireEmployeeMenu.h"

namespace employ::custom::menu {
    class DisplayFireEmployeeMenuDriver {
    public:
        DisplayFireEmployeeMenuDriver &display();

        DisplayFireEmployeeMenuDriver &action();

    private:
        DisplayFireEmployeeMenu displayFireEmployeeMenu;
    };
}


