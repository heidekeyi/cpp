//
// Created by 12131 on 2021/9/2.
//

#include "AllMenu.h"


namespace employ::custom::menu {
    void AllMenu::display() {
        cout << "all employees information" << endl;
    }

    void AllMenu::action() {
        displayAll();
    }
}