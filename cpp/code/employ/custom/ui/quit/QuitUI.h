//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../base/BaseUI.h"

namespace employ::custom::ui {
    class QuitUI : public BaseUI {
    public:
        void displayMenu() override;

        void action() override;

        [[nodiscard]] bool quitStatus() const;

    private:
        bool valQuitStatus{false};
    };
}

