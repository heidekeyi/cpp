//
// Created by 12131 on 2021/9/2.
//

#pragma once

namespace employ::custom::ui {
    class BaseUI {
    public:
        virtual void displayMenu() = 0;

        virtual void action() = 0;

        virtual ~BaseUI() = default;
    };
}

