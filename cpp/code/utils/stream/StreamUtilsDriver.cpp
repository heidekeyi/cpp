
//
// Created by 12131 on 2021/9/2.
//

#include "StreamUtilsDriver.h"
#include <iostream>
#include "StreamUtils.h"

namespace utils {
    using std::cout, std::endl;

    StreamUtilsDriver &StreamUtilsDriver::charValue() {
        cout << "(ex: a b): ";
        char ch = StreamUtils::charValue();
        cout << "first: " << ch << endl;
        ch = StreamUtils::charValue();
        cout << "second: " << ch << endl;
        StreamUtils::clear();
        return *this;
    }

    StreamUtilsDriver &StreamUtilsDriver::intValue() {
        cout << "(ex: 123 11): ";
        cout << StreamUtils::intValue() << endl;
        StreamUtils::clear();
        return *this;
    }

    StreamUtilsDriver &StreamUtilsDriver::lineValue() {
        cout << "(ex: 123 ab c): ";
        char buffer[32];
        cout << StreamUtils::lineValue(buffer, sizeof(buffer)) << endl;
        return *this;
    }

    StreamUtilsDriver &StreamUtilsDriver::clear() {
        cout << "(ex: ab): ";
        char ch = StreamUtils::charValue();
        cout << "first: " << ch << endl;
        StreamUtils::clear();
        cout << "clear" << endl;
        cout << "(ex: ab): ";
        ch = StreamUtils::charValue();
        cout << "first: " << ch << endl;
        cout << "clear" << endl;
        StreamUtils::clear();
        return *this;
    }
}