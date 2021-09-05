//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "PromoteMenu.h"

namespace employ::custom::menu {
    class PromoteMenuDriver {
    public:
        PromoteMenuDriver &display();

        PromoteMenuDriver &action();

    private:
        PromoteMenu promoteSalaryMenu;
    };
}


