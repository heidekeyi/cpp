//
// Created by 12131 on 2021/9/5.
//


#pragma once

#include "../update/base/UpdateBaseEmployeeMenu.h"

namespace employ::custom::menu {
    class FireEmployeeMenu : public UpdateBaseEmployeeMenu {
    public:
        void display() override;

        void action() override;
    };
}


