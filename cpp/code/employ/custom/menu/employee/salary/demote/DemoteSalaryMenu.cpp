//
// Created by 12131 on 2021/9/4.
//

#include "DemoteSalaryMenu.h"

namespace employ::custom::menu {
    void DemoteSalaryMenu::action() {
        demote();
    }

    void DemoteSalaryMenu::display() {
        cout << "demote salary" << endl;
    }
}