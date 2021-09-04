//
// Created by 12131 on 2021/9/2.
//

#include "AppCustom.h"
#include "../menu/display/all/DisplayAllEmployeeMenu.h"
#include "../menu/display/fire/DisplayFireEmployeeMenu.h"
#include "../menu/display/hire/DisplayHireEmployeeMenu.h"

namespace employ::custom {
    using namespace employ::custom::menu;

    AppCustom::~AppCustom() {
        for (auto it : vMenu) {
            delete it;
        }
    }

    void AppCustom::start() {
        initMenu();
        do {
            display();
            int val{0};
            cout << "please select menu: ";
            std::cin >> val;
            vMenu[val - 1]->action();
        } while (!quitMenu->quitStatus());
        cout << "good bye!" << endl;
    }

    AppCustom &AppCustom::initMenu() {
        vMenu.push_back(new DisplayAllEmployeeMenu);
        vMenu.push_back(new DisplayHireEmployeeMenu);
        vMenu.push_back(new DisplayFireEmployeeMenu);
        vMenu.push_back(quitMenu);
        return *this;
    }

    void AppCustom::display() {
        for (int i = 0; i < vMenu.size(); ++i) {
            cout << i + 1 << ") ";
            vMenu[i]->display();
        }
    }
}