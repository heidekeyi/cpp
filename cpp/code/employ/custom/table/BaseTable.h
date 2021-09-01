//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_BASETABLE_H
#define CPP_BASETABLE_H

#include <string>
#include "../utils/TimeUtils.h"

namespace employ::custom::table {
    using utils::TimeUtils;

    class BaseTable {
    public:
        explicit BaseTable(int id) : valId{id} {}

        [[nodiscard]] auto id() const { return valId; }

        [[nodiscard]] const auto &createTime() const { return valCreateTime; }

    private:
        int valId;
        std::string valCreateTime{TimeUtils::datetime(TimeUtils::timestamp())};
    };
}

#endif //CPP_BASETABLE_H
