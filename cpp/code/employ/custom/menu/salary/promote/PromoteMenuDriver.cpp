//
// Created by 12131 on 2021/9/4.
//

#include "PromoteMenuDriver.h"
#include "PromoteMenu.h"

namespace employ::custom::menu {

    PromoteMenuDriver &PromoteMenuDriver::display() {
        PromoteMenu{}.display();
        return *this;
    }

    PromoteMenuDriver &PromoteMenuDriver::action() {
        return *this;
    }
}