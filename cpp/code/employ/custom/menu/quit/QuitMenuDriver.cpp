//
// Created by 12131 on 2021/9/2.
//

#include "QuitMenuDriver.h"
#include "QuitMenu.h"
#include <iostream>

namespace employ::custom::menu {
    using std::cout, std::endl;

    QuitMenuDriver &QuitMenuDriver::quitStatus() {
        cout << QuitMenu{}.quitStatus() << endl;
        return *this;
    }

    QuitMenuDriver &QuitMenuDriver::action() {
        QuitMenu obj{};
        cout << "action before: " << obj.quitStatus() << endl;
        obj.action();
        cout << "action after: " << obj.quitStatus() << endl;
        return *this;
    }

    QuitMenuDriver &QuitMenuDriver::display() {
        QuitMenu{}.display();
        return *this;
    }
}