//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "../base/BaseMenu.h"

namespace employ::custom::menu {
    class HireMenu : public BaseMenu {
    public:
        void display() override;

        void action() override;
    };
}

