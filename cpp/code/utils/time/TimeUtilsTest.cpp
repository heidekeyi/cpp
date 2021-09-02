//
// Created by 12131 on 2021/9/1.
//
#include <iostream>
#include "TimeUtilsTest.h"
#include "TimeUtils.h"


namespace utils {
    using std::cout, std::endl;

    TimeUtilsTest &TimeUtilsTest::datetime() {
        cout << TimeUtils::datetime(0) << endl;
        cout << TimeUtils::datetime(TimeUtils::timestamp()) << endl;
        return *this;
    }

    TimeUtilsTest &TimeUtilsTest::timestamp() {
        cout << TimeUtils::timestamp() << endl;
        return *this;
    }

    TimeUtilsTest &TimeUtilsTest::empty() {
        auto a = TimeUtils::datetime(0),
                b = TimeUtils::datetime(1);
        cout << TimeUtils::empty(b) << endl;
        cout << TimeUtils::empty(a) << endl;
        return *this;
    }

    TimeUtilsTest &TimeUtilsTest::nowDatetime() {
        cout << TimeUtils::nowDatetime() << endl;
        return *this;
    }
}


