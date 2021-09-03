//
// Created by 12131 on 2021/9/2.
//

#include "StreamUtils.h"
#include <iostream>

namespace utils {
    using std::cout, std::cin;

    char StreamUtils::charValue() {
        char ch;
        cin >> ch;
        return ch;
    }

    int StreamUtils::intValue() {
        int val;
        cin >> val;
        return val;
    }

    char *StreamUtils::lineValue(char *buffer, size_t size) {
        cin.getline(buffer, size);
        return buffer;
    }

    void StreamUtils::clear() {
        cin.clear();
        while (true) {
            char ch = cin.get();
            if ('\r' == ch || '\n' == ch) {
                break;
            }
        }
    }
}
