//
// Created by 12131 on 2021/9/1.
//


#pragma once

#include <ctime>
#include <string>

namespace utils {
    using std::string, std::time_t;

    class TimeUtils {
    public:
        static string datetime(time_t t);

        static string datetime();

        static time_t timestamp();
    };
}

