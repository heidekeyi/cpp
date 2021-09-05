//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include <vector>
#include "../../../utils/display/DisplayUtils.h"
#include "EmployeeTable.h"

namespace employ::custom::table {
    using std::vector;
    using namespace utils;

    class EmployeeTableDriver {
    public:
        EmployeeTableDriver &empNo();

        EmployeeTableDriver &name();

        EmployeeTableDriver &hire();

        EmployeeTableDriver &fire();

        void display(const EmployeeTable &obj);

        void display(const vector<EmployeeTable> &vec);

    private:
        DisplayUtils displayUtils;
    };
}

