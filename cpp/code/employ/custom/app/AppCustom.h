//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../ui/base/BaseUI.h"
#include "../ui/quit/QuitUI.h"
#include <vector>

namespace employ::custom {
    using namespace employ::custom::ui;
    using std::vector;

    class AppCustom {
    public:
        ~AppCustom() {
            for (auto it : valUI) {
                delete it;
            }
        }

        void start();

    private:
        AppCustom &initUI();

    private:
        vector<BaseUI *> valUI;
        QuitUI *quitUi{new QuitUI};
    };
}

