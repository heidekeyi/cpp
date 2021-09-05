//
// Created by 12131 on 2021/9/4.
//

#include "PromoteSalaryMenu.h"

namespace employ::custom::menu {
    void PromoteSalaryMenu::action() {
        promote();
    }

    void PromoteSalaryMenu::display() {
        cout << "promote salary" << endl;
    }
}
