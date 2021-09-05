//
// Created by 12131 on 2021/9/5.
//


#pragma once

#include "FireMenu.h"
#include "../hiring/HiringMenu.h"
#include "../fired/FiredMenu.h"
#include "../hire/HireMenu.h"
namespace employ::custom::menu {
    class FireMenuDriver {
    public:
        FireMenuDriver &display();

        FireMenuDriver &action();

    private:
        FireMenu fireEmployeeMenu;
        HiringMenu displayHireEmployeeMenu;
        FiredMenu displayFireEmployeeMenu;
        HireMenu hireEmployeeMenu;
    };
}


