//
// Created by 12131 on 2021/9/3.
//

#pragma once

#include "amount/AmountTable.h"
#include "base/BaseTable.h"
#include <vector>

namespace employ::custom::table {
    using std::vector;

    class TableDisplay {
    public:
        static void base(const BaseTable &it);

        static void base(const vector<BaseTable> &v);

        static void amount(const AmountTable &it);

        static void amount(const vector<AmountTable> &v);
    };
}

