//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "../../../base/BaseMenu.h"
namespace employ::custom::menu {
    class BaseSalaryMenu : public BaseMenu {
    public:
        void display() override = 0;

        void action() override = 0;

    protected:
        static size_t demote();

        static size_t promote();

    private:
        static size_t insert(int factor);
    };
}


