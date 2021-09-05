//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "../update/UpdateMenu.h"

namespace employ::custom::menu {
    class HireMenu : public UpdateMenu {
    public:
        void display() override;

        void action() override;
    };
}


