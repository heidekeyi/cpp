//
// Created by 12131 on 2021/9/3.
//

#include "FiredMenu.h"

namespace employ::custom::menu {
    void FiredMenu::display() {
        cout << "fired employees information" << endl;
    }

    void FiredMenu::action() {
        displayFire();
    }
}