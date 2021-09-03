//
// Created by 12131 on 2021/9/2.
//

#pragma once

namespace employ::custom::menu {
    class BaseMenu {
    public:
        virtual void display() = 0;

        virtual void action() = 0;

        virtual ~BaseMenu() = default;
    };
}

