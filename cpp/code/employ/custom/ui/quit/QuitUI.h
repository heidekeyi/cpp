//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_QUITUI_H
#define CPP_QUITUI_H

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
#endif //CPP_QUITUI_H
