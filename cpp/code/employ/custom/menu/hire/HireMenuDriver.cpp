//
// Created by 12131 on 2021/9/4.
//

#include "HireMenuDriver.h"
#include "../all/AllMenu.h"

namespace employ::custom::menu {

    HireMenuDriver &HireMenuDriver::display() {
        cout << "HireMenuDriver::display" << endl;
        hireEmployeeMenu.display();
        return *this;
    }

    HireMenuDriver &HireMenuDriver::action() {
        cout << "HireMenuDriver::action" << endl;
        hireEmployeeMenu.action();
        AllMenu{}.action();
        return *this;
    }
}