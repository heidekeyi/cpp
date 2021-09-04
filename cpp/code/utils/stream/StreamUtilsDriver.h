//
// Created by 12131 on 2021/9/2.
//


#pragma once

#include "../display/DisplayUtils.h"

namespace utils {
    class StreamUtilsDriver {
    public:
        StreamUtilsDriver &charValue();

        StreamUtilsDriver &intValue();

        StreamUtilsDriver &lineValue();

        StreamUtilsDriver &clear();

    private:
        DisplayUtils displayUtils;
    };
}

