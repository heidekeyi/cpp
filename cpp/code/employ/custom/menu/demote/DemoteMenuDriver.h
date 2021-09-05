//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "DemoteMenu.h"

namespace employ::custom::menu {
    class DemoteMenuDriver {
    public:
        DemoteMenuDriver &display();

        DemoteMenuDriver &action();

    private:
        DemoteMenu demoteSalaryMenu;
    };
}


