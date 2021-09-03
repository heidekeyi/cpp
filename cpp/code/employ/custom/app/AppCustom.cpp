//
// Created by 12131 on 2021/9/2.
//

#include "AppCustom.h"
#include <iostream>
#include "../../../utils/stream/StreamUtils.h"
#include "../ui/all/AllUI.h"

namespace employ::custom {
    using namespace employ::custom::ui;
    using std::cout, std::endl;
    using utils::StreamUtils;

    void AppCustom::start() {
        if (vUI.empty()) {
            initUI();
        }
        do {
            for (int i = 0; i < vUI.size(); ++i) {
                cout << i + 1 << ") ";
                vUI[i]->displayMenu();
            }
            cout << "please select menu id:\t";
            size_t val = StreamUtils::intValue() - 1;
            StreamUtils::clear();
            if (val >= vUI.size()) {
                cout << "id is invalid" << endl;
            } else {
                vUI[val]->action();
            }
        } while (!quitUi->quitStatus());
        cout << "good bye!" << endl;
    }

    AppCustom &AppCustom::initUI() {
        vUI.push_back(new AllUI);
        vUI.push_back(quitUi);
        return *this;
    }
}