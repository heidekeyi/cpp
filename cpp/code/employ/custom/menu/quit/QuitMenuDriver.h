//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../../../../utils/display/DisplayUtils.h"
#include "QuitMenu.h"

namespace employ::custom::menu {
    class QuitMenuDriver {
    public:
        QuitMenuDriver &display();

        QuitMenuDriver &action();

        QuitMenuDriver &quitStatus();

    private:
        utils::DisplayUtils displayUtils;
        QuitMenu quitMenu;
    };
}


