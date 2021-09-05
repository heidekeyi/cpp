//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "FiredMenu.h"

namespace employ::custom::menu {
    class FiredMenuDriver {
    public:
        FiredMenuDriver &display();

        FiredMenuDriver &action();

    private:
        FiredMenu displayFireEmployeeMenu;
    };
}


