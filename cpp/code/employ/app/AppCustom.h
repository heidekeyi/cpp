//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../menu/quit/QuitMenu.h"
#include <vector>

namespace employ::custom {
    using namespace employ::custom::menu;
    using std::vector;

    class AppCustom {
    public:
        ~AppCustom();

        void start();

    private:
        AppCustom &initMenu();

        void display();

    private:
        vector<BaseMenu *> vMenu;
        QuitMenu *quitMenu{new QuitMenu};
    };
}

