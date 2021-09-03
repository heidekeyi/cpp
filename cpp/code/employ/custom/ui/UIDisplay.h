//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include <vector>
#include "../table/employee/EmployeeTable.h"

namespace employ::custom::ui {
    using employ::custom::table::EmployeeTable;
    using std::vector;

    class UIDisplay {
    public:
        static void employee(const vector<EmployeeTable> &vEmp, const vector<int> &vSalary);
    };
}


