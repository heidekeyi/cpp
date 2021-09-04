//
// Created by 12131 on 2021/9/3.
//

#include "DisplayHireEmployeeMenu.h"

namespace employ::custom::menu {
    void DisplayHireEmployeeMenu::display() {
        cout << "hiring employees information" << endl;
    }

    void DisplayHireEmployeeMenu::action() {
        displayHire();
    }
}