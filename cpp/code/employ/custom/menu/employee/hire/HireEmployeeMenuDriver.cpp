//
// Created by 12131 on 2021/9/4.
//

#include "HireEmployeeMenuDriver.h"
#include "../display/all/DisplayAllEmployeeMenu.h"

namespace employ::custom::menu {

    HireEmployeeMenuDriver &HireEmployeeMenuDriver::display() {
        cout << "HireEmployeeMenuDriver::display" << endl;
        hireEmployeeMenu.display();
        return *this;
    }

    HireEmployeeMenuDriver &HireEmployeeMenuDriver::action() {
        cout << "HireEmployeeMenuDriver::action" << endl;
        hireEmployeeMenu.action();
        DisplayAllEmployeeMenu{}.action();
        return *this;
    }
}