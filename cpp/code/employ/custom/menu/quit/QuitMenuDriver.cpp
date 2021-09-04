//
// Created by 12131 on 2021/9/2.
//

#include "QuitMenuDriver.h"

namespace employ::custom::menu {
    QuitMenuDriver &QuitMenuDriver::quitStatus() {
        displayUtils
                .out("QuitMenuDriver::quitStatus").next()
                .out(quitMenu.quitStatus()).next();
        return *this;
    }

    QuitMenuDriver &QuitMenuDriver::action() {
        displayUtils
                .out("QuitMenuDriver::action").next()
                .out("action before: ").out(quitMenu.quitStatus())
                .next();
        quitMenu.action();
        displayUtils
                .out("action after: ").out(quitMenu.quitStatus())
                .next();
        return *this;
    }

    QuitMenuDriver &QuitMenuDriver::display() {
        displayUtils.out("QuitMenuDriver::display").next();
        quitMenu.display();
        return *this;
    }
}