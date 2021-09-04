//
// Created by 12131 on 2021/9/4.
//

#include "DemoteMenuDriver.h"
#include "DemoteMenu.h"

namespace employ::custom::menu {

    DemoteMenuDriver &DemoteMenuDriver::display() {
        DemoteMenu{}.display();
        return *this;
    }

    DemoteMenuDriver &DemoteMenuDriver::action() {
        return *this;
    }
}