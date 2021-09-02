//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_APPCUSTOM_H
#define CPP_APPCUSTOM_H

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
#endif //CPP_APPCUSTOM_H
