//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "display/DisplayUtilsDriver.h"
#include "time/TimeUtilsDriver.h"
#include "stream/StreamUtilsDriver.h"

namespace utils {
    void driver() {
        DisplayUtilsDriver{}.with().left();
        TimeUtilsDriver{}.timestamp().datetime();
        StreamUtilsDriver{}.charValue().clear().intValue().lineValue();
    }
}


