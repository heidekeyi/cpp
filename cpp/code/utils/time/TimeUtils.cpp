//
// Created by 12131 on 2021/9/3.
//

#include "TimeUtils.h"

namespace utils {

    string TimeUtils::datetime(time_t t) {
        char buffer[32];
        std::strftime(buffer,
                      sizeof(buffer),
                      "%Y-%m-%d %H:%M:%S",
                      std::localtime(&t));
        return string(buffer);
    }

    string TimeUtils::datetime() {
        return datetime(timestamp());
    }

    time_t TimeUtils::timestamp() {
        time_t t;
        std::time(&t);
        return t;
    }
}