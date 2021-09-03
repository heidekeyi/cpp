//
// Created by 12131 on 2021/9/3.
//

#pragma once

#include "amount/AmountTable.h"
#include "base/BaseTable.h"
#include "employee/EmployeeTable.h"
#include <vector>

namespace employ::custom::table {
    using std::vector;

    class TableDisplay {
    public:
        static void base(const BaseTable &obj);

        static void base(const vector<BaseTable> &v);

        static void amount(const AmountTable &obj);

        static void amount(const vector<AmountTable> &v);

        static void employee(const EmployeeTable &obj);

        static void employee(const vector<EmployeeTable> &v);
    };
}

