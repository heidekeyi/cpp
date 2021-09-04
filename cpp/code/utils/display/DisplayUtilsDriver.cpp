//
// Created by 12131 on 2021/9/3.
//

#include "DisplayUtilsDriver.h"

namespace utils {
    DisplayUtilsDriver &DisplayUtilsDriver::with() {
        cout << "DisplayUtilsDriver::with" << endl;
        displayUtils.width(10).out(1)
                .width(10).out('a')
                .width(10).out("ab")
                .next();
        return *this;
    }

    DisplayUtilsDriver &DisplayUtilsDriver::left() {
        cout << "DisplayUtilsDriver::left" << endl;
        displayUtils.left()
                .width(10).out(1)
                .width(10).out('a')
                .width(10).out("ab")
                .next();
        return *this;
    }

    DisplayUtilsDriver &DisplayUtilsDriver::right() {
        cout << "DisplayUtilsDriver::right" << endl;
        displayUtils.left()
                .out("left: ").width(10).out(1).out("a")
                .right()
                .out("----right").width(10).out('a').out(1)
                .next();
        return *this;
    }
}