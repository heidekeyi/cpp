//
// Created by 12131 on 2021/9/5.
//

#include "FireEmployeeMenuDriver.h"

namespace employ::custom::menu {
    FireEmployeeMenuDriver &FireEmployeeMenuDriver::display() {
        cout << "FireEmployeeMenuDriver::display" << endl;
        fireEmployeeMenu.display();
        return *this;
    }

    FireEmployeeMenuDriver &FireEmployeeMenuDriver::action() {
        cout << "FireEmployeeMenuDriver::action" << endl;
        hireEmployeeMenu.action();
        displayHireEmployeeMenu.action();
        fireEmployeeMenu.action();
        displayFireEmployeeMenu.action();
        return *this;
    }
}