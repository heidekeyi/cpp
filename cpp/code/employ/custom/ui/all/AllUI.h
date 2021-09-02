//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_ALLUI_H
#define CPP_ALLUI_H

#include "../base/BaseUI.h"

namespace employ::custom::ui {
    class AllUI : public BaseUI {
    public:
        void displayMenu() override;

        void action() override;
    };
}
#endif //CPP_ALLUI_H
