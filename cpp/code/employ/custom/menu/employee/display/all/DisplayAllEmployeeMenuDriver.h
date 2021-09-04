//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "DisplayAllEmployeeMenu.h"

namespace employ::custom::menu {
    class DisplayAllEmployeeMenuDriver {
    public:
        DisplayAllEmployeeMenuDriver &display();

        DisplayAllEmployeeMenuDriver &action();

    private:
        DisplayAllEmployeeMenu displayAllEmployeeMenu;
    };
}


