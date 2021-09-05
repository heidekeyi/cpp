//
// Created by 12131 on 2021/9/5.
//

#include "FireMenuDriver.h"

namespace employ::custom::menu {
    FireMenuDriver &FireMenuDriver::display() {
        cout << "FireMenuDriver::display" << endl;
        fireEmployeeMenu.display();
        return *this;
    }

    FireMenuDriver &FireMenuDriver::action() {
        cout << "FireMenuDriver::action" << endl;
        hireEmployeeMenu.action();
        displayHireEmployeeMenu.action();
        fireEmployeeMenu.action();
        displayFireEmployeeMenu.action();
        return *this;
    }
}