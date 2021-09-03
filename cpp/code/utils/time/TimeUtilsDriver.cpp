//
// Created by 12131 on 2021/9/1.
//
#include <iostream>
#include "TimeUtilsDriver.h"
#include "TimeUtils.h"


namespace utils {
    using std::cout, std::endl;

    TimeUtilsDriver &TimeUtilsDriver::datetime() {
        cout << TimeUtils::datetime(0) << endl;
        cout << TimeUtils::datetime() << endl;
        return *this;
    }

    TimeUtilsDriver &TimeUtilsDriver::timestamp() {
        cout << TimeUtils::timestamp() << endl;
        return *this;
    }
}


