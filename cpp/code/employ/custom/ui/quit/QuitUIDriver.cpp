//
// Created by 12131 on 2021/9/2.
//

#include "QuitUIDriver.h"
#include "QuitUI.h"
#include <iostream>

namespace employ::custom::ui {
    using std::cout, std::endl;

    QuitUIDriver &QuitUIDriver::quitStatus() {
        cout << QuitUI{}.quitStatus() << endl;
        return *this;
    }

    QuitUIDriver &QuitUIDriver::action() {
        QuitUI obj{};
        cout << "action before: " << obj.quitStatus() << endl;
        obj.action();
        cout << "action after: " << obj.quitStatus() << endl;
        return *this;
    }

    QuitUIDriver &QuitUIDriver::displayMenu() {
        QuitUI{}.displayMenu();
        return *this;
    }
}