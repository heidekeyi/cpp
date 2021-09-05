//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "../update/UpdateMenu.h"

namespace employ::custom::menu {
    class SalaryMenu : public UpdateMenu {
    public:
        void display() override = 0;

        void action() override = 0;

    protected:
        size_t demote();

        size_t promote();

    private:
        size_t salary(const char *name, int factor);
    };
}


