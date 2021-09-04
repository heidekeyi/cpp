//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../base/DisplayBaseEmployeeMenu.h"

namespace employ::custom::menu {
    class DisplayAllEmployeeMenu : public DisplayBaseEmployeeMenu {
    public:
        void display() override;

        void action() override;
    };
}

