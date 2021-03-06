//
// Created by 12131 on 2021/9/2.
//

#include "QuitMenu.h"

namespace employ::custom::menu {
    void QuitMenu::action() {
        valQuitStatus = true;
    }

    void QuitMenu::display() {
        cout << "quit (stop application)" << endl;
    }

    bool QuitMenu::quitStatus() const {
        return valQuitStatus;
    }
}

