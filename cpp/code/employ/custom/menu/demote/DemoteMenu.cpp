//
// Created by 12131 on 2021/9/4.
//

#include "DemoteMenu.h"

namespace employ::custom::menu {
    void DemoteMenu::action() {
        demote();
    }

    void DemoteMenu::display() {
        cout << "demote salary" << endl;
    }
}