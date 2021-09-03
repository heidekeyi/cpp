//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_BASETABLE_H
#define CPP_BASETABLE_H

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
        const string valCreateTime{TimeUtils::nowDatetime()};
    };
}

#endif //CPP_BASETABLE_H
