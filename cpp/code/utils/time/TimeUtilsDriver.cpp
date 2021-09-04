//
// Created by 12131 on 2021/9/1.
//

#include "TimeUtilsDriver.h"
#include "TimeUtils.h"

namespace utils {
    TimeUtilsDriver &TimeUtilsDriver::datetime() {
        displayUtils
                .out("TimeUtilsDriver::datetime").next()
                .out(TimeUtils::datetime(1000)).next()
                .out(TimeUtils::datetime()).next();
        return *this;
    }

    TimeUtilsDriver &TimeUtilsDriver::timestamp() {
        displayUtils
                .out("TimeUtilsDriver::timestamp").next()
                .out(TimeUtils::timestamp()).next();
        return *this;
    }
}


