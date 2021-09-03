//
// Created by 12131 on 2021/9/2.
//

#include "QuitUI.h"
#include <iostream>

namespace employ::custom::ui {
    using std::cout, std::endl;

    void QuitUI::action() {
        valQuitStatus = true;
    }

    void QuitUI::displayMenu() {
        cout << "quit (stop application)" << endl;
    }

    bool QuitUI::quitStatus() const {
        return valQuitStatus;
    }
}

