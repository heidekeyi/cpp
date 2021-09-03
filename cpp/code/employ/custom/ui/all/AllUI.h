//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../base/BaseUI.h"

namespace employ::custom::ui {
    class AllUI : public BaseUI {
    public:
        void displayMenu() override;

        void action() override;
    };
}

