//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include <vector>
#include "../../../utils/display/DisplayUtils.h"
#include "BaseTable.h"

namespace employ::custom::table {
    using std::vector;
    using namespace utils;

    class BaseTableDriver {
    public:
        BaseTableDriver &id();

        BaseTableDriver &createTime();

        void display(const BaseTable &obj);

        void display(const vector<BaseTable> &vec);

    private:
        DisplayUtils displayUtils;
    };
}

