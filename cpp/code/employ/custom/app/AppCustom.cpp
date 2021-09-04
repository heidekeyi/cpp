//
// Created by 12131 on 2021/9/2.
//

#include "AppCustom.h"
#include <iostream>
#include "../../../utils/stream/StreamUtils.h"
#include "../menu/display/all/DisplayAllEmployeeMenu.h"
#include "../menu/display/fire/DisplayFireEmployeeMenu.h"
#include "../menu/display/hire/DisplayHireEmployeeMenu.h"

namespace employ::custom {
    using namespace employ::custom::menu;
    using std::cout, std::endl;
    using utils::StreamUtils;

    void AppCustom::start() {
        if (vMenu.empty()) {
            initMenu();
        }
        do {
            for (int i = 0; i < vMenu.size(); ++i) {
                cout << i + 1 << ") ";
                vMenu[i]->display();
            }
            cout << "please select menu id:\t";
            size_t val = StreamUtils::intValue() - 1;
            StreamUtils::clear();
            if (val >= vMenu.size()) {
                cout << "id is invalid" << endl;
            } else {
                vMenu[val]->action();
            }
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
}