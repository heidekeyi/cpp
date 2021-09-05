//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../display/DisplayMenu.h"

namespace employ::custom::menu {
    class AllMenu : public DisplayMenu {
    public:
        void display() override;

        void action() override;
    };
}

