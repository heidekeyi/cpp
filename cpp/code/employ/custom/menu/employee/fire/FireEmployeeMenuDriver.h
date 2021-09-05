//
// Created by 12131 on 2021/9/5.
//


#pragma once

#include "FireEmployeeMenu.h"
#include "../display/hire/DisplayHireEmployeeMenu.h"
#include "../display/fire/DisplayFireEmployeeMenu.h"
#include "../hire/HireEmployeeMenu.h"
namespace employ::custom::menu {
    class FireEmployeeMenuDriver {
    public:
        FireEmployeeMenuDriver &display();

        FireEmployeeMenuDriver &action();

    private:
        FireEmployeeMenu fireEmployeeMenu;
        DisplayHireEmployeeMenu displayHireEmployeeMenu;
        DisplayFireEmployeeMenu displayFireEmployeeMenu;
        HireEmployeeMenu hireEmployeeMenu;
    };
}


