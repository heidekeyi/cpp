//
// Created by 12131 on 2021/9/1.
//

#include "DisplayDriver.h"

namespace employ::custom::driver {
    DisplayDriver &DisplayDriver::current() {
        return *this;
    }

    DisplayDriver &DisplayDriver::all() {
        return *this;
    }

    DisplayDriver &DisplayDriver::fired() {
        return *this;
    }
}