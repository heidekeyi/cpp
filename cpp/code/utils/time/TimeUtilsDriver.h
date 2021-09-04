//
// Created by 12131 on 2021/9/1.


#pragma once

#include "../display/DisplayUtils.h"

namespace utils {
    class TimeUtilsDriver {
    public:
        TimeUtilsDriver &datetime();

        TimeUtilsDriver &timestamp();

    private:
        DisplayUtils displayUtils;
    };
}

