//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include <iomanip>

namespace utils {
    class DisplayUtils {
    public:
        static auto width(int w) { return std::setw(w); };

        static auto left() { return std::setiosflags(std::ios::left); };
    };
}

