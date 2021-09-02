//
// Created by 12131 on 2021/9/2.
//

#include "AppCustom.h"
#include <iostream>
#include "../../../utils/stream/StreamUtils.h"
#include "../ui/all/AllUI.h"

namespace employ::custom {
    using namespace employ::custom::ui;

    void AppCustom::start() {
        using utils::StreamUtils;
        using std::cout, std::endl;
        if (valUI.empty()) {
            initUI();
        }
        do {
            for (int i = 0; i < valUI.size(); ++i) {
                cout << i + 1 << ") ";
                valUI[i]->displayMenu();
            }
            cout << "please select menu id:\t";
            size_t val = StreamUtils::intValue() - 1;
            if (val >= valUI.size()) {
                cout << "id is invalid" << endl;
            } else {
                valUI[val]->action();
            }
        } while (!quitUi->quitStatus());
    }

    AppCustom &AppCustom::initUI() {
        valUI.push_back(new AllUI);
        valUI.push_back(quitUi);
        return *this;
    }
}