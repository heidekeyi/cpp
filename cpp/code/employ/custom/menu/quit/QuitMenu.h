//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../base/BaseMenu.h"

namespace employ::custom::menu {
    class QuitMenu : public BaseMenu {
    public:
        void display() override;

        void action() override;

        [[nodiscard]] bool quitStatus() const;

    private:
        bool valQuitStatus{false};
    };
}

