//
// Created by 12131 on 2021/9/3.
//

#include "DisplayUtilsDriver.h"
#include "DisplayUtils.h"
#include <iostream>

namespace utils {
    using std::cout, std::endl;

    DisplayUtilsDriver &DisplayUtilsDriver::with() {
        auto w = DisplayUtils::width(12);
        cout << 1 << w << "hello" << endl;
        return *this;
    }

    DisplayUtilsDriver &DisplayUtilsDriver::left() {
        auto left = DisplayUtils::left();
        cout << "a " << " b"
             << left << DisplayUtils::width(12) << "hello"
             << endl;
        return *this;
    }
}