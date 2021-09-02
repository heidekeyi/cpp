//
// Created by 12131 on 2021/9/2.
//

#include "TestUtils.h"
#include "../time/TimeUtilsTest.h"
#include "../stream/StreamUtilsTest.h"

namespace utils {
    TestUtils &TestUtils::timeUtils() {
        TimeUtilsTest{}
                .timestamp()
                .datetime()
                .empty()
                .nowDatetime();
        return *this;
    }

    TestUtils &TestUtils::streamUtils() {
        StreamUtilsTest{}
                .charValue()
                .intValue()
                .lineValue();
        return *this;
    }
}
