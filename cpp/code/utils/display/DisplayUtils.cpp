//
// Created by 12131 on 2021/9/4.
//

#include "DisplayUtils.h"

namespace utils {
    DisplayUtils &DisplayUtils::width(size_t w) {
        cout.width(w);
        return *this;
    }

    DisplayUtils &DisplayUtils::right() {
        cout.setf(std::ios::right);
        return *this;
    }

    DisplayUtils &DisplayUtils::left() {
        cout.setf(std::ios::left);
        return *this;
    }

    DisplayUtils &DisplayUtils::out(char ch) {
        cout << ch;
        return *this;
    }


    DisplayUtils &DisplayUtils::out(int val) {
        cout << val;
        return *this;
    }

    DisplayUtils &DisplayUtils::out(const string &str) {
        cout << str;
        return *this;
    }

    DisplayUtils &DisplayUtils::next() {
        cout << endl;
        return *this;
    }

    DisplayUtils &DisplayUtils::out(time_t t) {
        cout << t;
        return *this;
    }

    DisplayUtils &DisplayUtils::out(size_t val) {
        cout << val;
        return *this;
    }

    DisplayUtils &DisplayUtils::out(bool status) {
        cout << (status ? "true" : "false");
        return *this;
    }

    DisplayUtils &DisplayUtils::out(const char *str) {
        cout << str;
        return *this;
    }
}