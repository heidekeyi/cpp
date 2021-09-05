//
// Created by 12131 on 2021/9/4.
//

#include "PromoteMenu.h"

namespace employ::custom::menu {
    void PromoteMenu::action() {
        promote();
    }

    void PromoteMenu::display() {
        cout << "promote salary" << endl;
    }
}
