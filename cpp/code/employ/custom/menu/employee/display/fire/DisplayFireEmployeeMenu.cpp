//
// Created by 12131 on 2021/9/3.
//

#include "DisplayFireEmployeeMenu.h"

namespace employ::custom::menu {
    void DisplayFireEmployeeMenu::display() {
        cout << "fired employees information" << endl;
    }

    void DisplayFireEmployeeMenu::action() {
        displayFire();
    }
}