//
// Created by 12131 on 2021/9/1.
//

#pragma once

#include <string>
#include "../../../../utils/time/TimeUtils.h"

namespace employ::custom::table {
    using utils::TimeUtils;
    using std::string;

    class BaseTable {
    public:
        explicit BaseTable(int id);

        [[nodiscard]] int id() const;

        [[nodiscard]] const string &createTime() const;

    private:
        const int valId;
        const string valCreateTime{TimeUtils::datetime()};
    };
}


