//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include "../../../table/employee/EmployeeTable.h"
#include <vector>

namespace employ::custom::menu {
    using namespace employ::custom::table;
    using std::vector;

    class SalaryIMPLDriver {
    public:
        SalaryIMPLDriver &display();

        SalaryIMPLDriver &demote();

        SalaryIMPLDriver &promote();

    private:
        static void showEmployee(const vector<EmployeeTable> &v);
    };
}


