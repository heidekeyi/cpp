//
// Created by 12131 on 2021/9/2.
//

#include "AppCustom.h"
#include "../../custom/menu/all/AllMenu.h"
#include "../../custom/menu/fired/FiredMenu.h"
#include "../../custom/menu/hiring/HiringMenu.h"
#include "../../custom/menu/promote/PromoteMenu.h"
#include "../../custom/menu/demote/DemoteMenu.h"
#include "../../custom/menu/hire/HireMenu.h"
#include "../../custom/menu/fire/FireMenu.h"

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