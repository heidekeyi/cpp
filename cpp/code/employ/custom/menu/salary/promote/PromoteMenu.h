//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "../../base/BaseMenu.h"

namespace employ::custom::menu {
    class PromoteMenu : public BaseMenu {
    public:
        void display() override;

        void action() override;
    };
}



