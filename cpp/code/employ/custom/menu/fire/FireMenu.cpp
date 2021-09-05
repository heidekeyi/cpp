//
// Created by 12131 on 2021/9/5.
//

#include "FireMenu.h"

namespace employ::custom::menu {

    void FireMenu::display() {
        cout << "fire employee" << endl;
    }

    void FireMenu::action() {
        updateFire();
    }
}