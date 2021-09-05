//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include <iostream>
#include <string>

namespace employ::custom::menu {
    using std::cout, std::endl, std::string;

    class BaseMenu {
    public:
        virtual void display() = 0;

        virtual void action() = 0;

        virtual ~BaseMenu() = default;
    };
}

