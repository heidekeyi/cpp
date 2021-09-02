
//
// Created by 12131 on 2021/9/2.
//

#include "StreamUtilsTest.h"
#include <iostream>
#include "StreamUtils.h"

namespace utils {
    using std::cout, std::endl;

    StreamUtilsTest &StreamUtilsTest::charValue() {
        cout << "(ex: a): ";
        cout << StreamUtils::charValue() << endl;
        StreamUtils::clear();
        cout << "(ex: 12 34): ";
        cout << StreamUtils::charValue() << endl;
        StreamUtils::clear();
        cout << "(ex: ta): ";
        cout << StreamUtils::charValue() << endl;
        StreamUtils::clear();
        return *this;
    }

    StreamUtilsTest &StreamUtilsTest::intValue() {
        return *this;
    }

    StreamUtilsTest &StreamUtilsTest::lineValue() {
        return *this;
    }

    StreamUtilsTest &StreamUtilsTest::clear() {
        return *this;
    }
}