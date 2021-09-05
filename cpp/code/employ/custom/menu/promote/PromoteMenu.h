//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "../salary/SalaryMenu.h"

namespace employ::custom::menu {
    class PromoteMenu : public SalaryMenu {
    public:
        void display() override;

        void action() override;
    };
}



