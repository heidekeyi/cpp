//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "DisplayUtils.h"

namespace utils {
    class DisplayUtilsDriver {
    public:
        DisplayUtilsDriver &with();

        DisplayUtilsDriver &left();

        DisplayUtilsDriver &right();

    private:
        DisplayUtils displayUtils;
    };
}

