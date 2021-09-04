//
// Created by 12131 on 2021/9/2.
//

#include "DisplayAllEmployeeMenu.h"


namespace employ::custom::menu {
    void DisplayAllEmployeeMenu::display() {
        cout << "all employees information" << endl;
    }

    void DisplayAllEmployeeMenu::action() {
        displayAll();
    }
}