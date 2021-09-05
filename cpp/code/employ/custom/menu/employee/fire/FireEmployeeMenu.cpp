//
// Created by 12131 on 2021/9/5.
//

#include "FireEmployeeMenu.h"

namespace employ::custom::menu {

    void FireEmployeeMenu::display() {
        cout << "fire employee" << endl;
    }

    void FireEmployeeMenu::action() {
        displayEmployee();
        cout << "please select employee with id: ";
        auto valId = id();
        cout << "please input fire time: ";
        auto valFire = word();
        auto obj{employee(valId)};
        obj.fire(valFire);
        fire(obj);
    }
}