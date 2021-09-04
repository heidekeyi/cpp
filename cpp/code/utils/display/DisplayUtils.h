//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include <iostream>
#include <string>
#include <ctime>

namespace utils {
    using std::cout, std::endl, std::string, std::time_t;

    class DisplayUtils {
    public:
        DisplayUtils &width(size_t w);

        DisplayUtils &left();

        DisplayUtils &right();

        DisplayUtils &next();

        DisplayUtils &out(int val);

        DisplayUtils &out(char ch);

        DisplayUtils &out(size_t val);

        DisplayUtils &out(const string &str);

        DisplayUtils &out(time_t t);
    };
}

