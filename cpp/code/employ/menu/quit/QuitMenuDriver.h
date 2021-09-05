//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "QuitMenu.h"
#include "../../../utils/display/DisplayUtils.h"

namespace employ::custom::menu {
    class QuitMenuDriver {
    public:
        QuitMenuDriver &display();

        QuitMenuDriver &action();

        QuitMenuDriver &quitStatus();

    private:
        QuitMenu quitMenu;
        utils::DisplayUtils displayUtils;
    };
}


