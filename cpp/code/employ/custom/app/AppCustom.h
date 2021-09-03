//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../ui/quit/QuitUI.h"
#include <vector>

namespace employ::custom {
    using namespace employ::custom::ui;
    using std::vector;

    class AppCustom {
    public:
        ~AppCustom() {
            for (auto it : vUI) {
                delete it;
            }
        }

        void start();

    private:
        AppCustom &initUI();

    private:
        vector<BaseUI *> vUI;
        QuitUI *quitUi{new QuitUI};
    };
}

