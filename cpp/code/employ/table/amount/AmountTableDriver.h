//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include <vector>
#include "../../../utils/display/DisplayUtils.h"
#include "AmountTable.h"

namespace employ::custom::table {
    using std::vector;
    using namespace utils;

    class AmountTableDriver {
    public:
        AmountTableDriver &empId();

        AmountTableDriver &amount();

        void display(const AmountTable &obj);

        void display(const vector<AmountTable> &vec);

    private:
        DisplayUtils displayUtils;
    };
}

