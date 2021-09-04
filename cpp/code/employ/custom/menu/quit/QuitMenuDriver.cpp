//
// Created by 12131 on 2021/9/4.
//

#include "QuitMenuDriver.h"

namespace employ::custom::menu {
    QuitMenuDriver &QuitMenuDriver::display() {
        cout << "QuitMenuDriver::display" << endl;
        quitMenu.display();
        return *this;
    }

    QuitMenuDriver &QuitMenuDriver::action() {
        cout << "QuitMenuDriver::action" << endl;
        displayUtils.out("before: ").out(quitMenu.quitStatus()).next();
        quitMenu.action();
        displayUtils.out("after: ").out(quitMenu.quitStatus()).next();
        return *this;
    }

    QuitMenuDriver &QuitMenuDriver::quitStatus() {
        cout << "QuitMenuDriver::quitStatus" << endl;
        displayUtils.out(quitMenu.quitStatus()).next();
        return *this;
    }
}