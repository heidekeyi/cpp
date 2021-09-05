//
// Created by 12131 on 2021/9/1.
//

#pragma once

#include <string>
#include "../../../utils/time/TimeUtils.h"

namespace employ::custom::table {
    using utils::TimeUtils;
    using std::string;

    class BaseTable {
    public:
        explicit BaseTable(size_t id);

        [[nodiscard]] size_t id() const;

        [[nodiscard]] string createTime() const;

    private:
        const size_t valId;
        const string valCreateTime{TimeUtils::datetime()};
    };
}


