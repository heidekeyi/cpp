//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "../base/BaseSalaryMenu.h"

namespace employ::custom::menu {
    class DemoteSalaryMenu : public BaseSalaryMenu {
    public:
        void display() override;

        void action() override;
    };
}

