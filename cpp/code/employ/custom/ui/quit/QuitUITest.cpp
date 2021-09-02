//
// Created by 12131 on 2021/9/2.
//

#include "QuitUITest.h"
#include "QuitUI.h"
#include <iostream>

namespace employ::custom::ui {
    using std::cout, std::endl;

    QuitUITest &QuitUITest::quitStatus() {
        cout << QuitUI{}.quitStatus() << endl;
        return *this;
    }

    QuitUITest &QuitUITest::action() {
        QuitUI obj{};
        cout << obj.quitStatus() << "\t";
        obj.action();
        cout << obj.quitStatus() << endl;
        return *this;
    }

    QuitUITest &QuitUITest::displayMenu() {
        QuitUI{}.displayMenu();
        return *this;
    }
}