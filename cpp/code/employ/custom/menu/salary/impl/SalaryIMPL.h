//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include <string>

namespace employ::custom::menu {
    using std::string;

    class SalaryIMPL {
    public:
        static void display(const string &info);

        static void demote();

        static void promote();
    };
}

