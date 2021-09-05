//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "AllMenu.h"

namespace employ::custom::menu {
    class AllMenuDriver {
    public:
        AllMenuDriver &display();

        AllMenuDriver &action();

    private:
        AllMenu displayAllEmployeeMenu;
    };
}


