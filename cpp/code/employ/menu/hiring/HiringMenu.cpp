//
// Created by 12131 on 2021/9/3.
//

#include "HiringMenu.h"

namespace employ::custom::menu {
    void HiringMenu::display() {
        cout << "hiring employees information" << endl;
    }

    void HiringMenu::action() {
        displayHire();
    }
}