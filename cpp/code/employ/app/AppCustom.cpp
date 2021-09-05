//
// Created by 12131 on 2021/9/2.
//

#include "AppCustom.h"
#include "../menu/all/AllMenu.h"
#include "../menu/fired/FiredMenu.h"
#include "../menu/hiring/HiringMenu.h"
#include "../menu/promote/PromoteMenu.h"
#include "../menu/demote/DemoteMenu.h"
#include "../menu/hire/HireMenu.h"
#include "../menu/fire/FireMenu.h"

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
        vMenu.push_back(new HireMenu);
        vMenu.push_back(new FireMenu);
        vMenu.push_back(new AllMenu);
        vMenu.push_back(new HiringMenu);
        vMenu.push_back(new FiredMenu);
        vMenu.push_back(new PromoteMenu);
        vMenu.push_back(new DemoteMenu);
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