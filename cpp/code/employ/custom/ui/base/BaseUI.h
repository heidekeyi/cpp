//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_BASEUI_H
#define CPP_BASEUI_H

namespace employ::custom::ui {
    class BaseUI {
    public:
        virtual void displayMenu() = 0;

        virtual void action() = 0;

        virtual ~BaseUI() {}
    };
}

#endif //CPP_BASEUI_H
