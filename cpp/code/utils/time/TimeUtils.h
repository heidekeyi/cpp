//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_TIMEUTILS_H
#define CPP_TIMEUTILS_H

#include <ctime>
#include <string>

namespace utils {
    class TimeUtils {
    public:
        static std::string datetime(const std::time_t t) {
            char buffer[32];
            std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&t));
            return std::string(buffer);
        }

        static std::string nowDatetime() {
            return TimeUtils::datetime(TimeUtils::timestamp());
        }

        static std::time_t timestamp() {
            std::time_t t;
            std::time(&t);
            return t;
        }

        static bool empty(const std::string &datetime) {
            return TimeUtils::datetime(0) == datetime;
        }
    };
}
#endif //CPP_TIMEUTILS_H
