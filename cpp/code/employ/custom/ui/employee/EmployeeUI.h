//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_EMPLOYEEUI_H
#define CPP_EMPLOYEEUI_H

#include "../../table/employee/EmployeeTable.h"
#include <vector>

namespace employ::custom::ui {
    using namespace employ::custom::table;
    using std::vector;

    class EmployeeUI {
    public:
        static void display(const vector<EmployeeTable> &employee, const vector<int> &salary);
    };
}

#endif //CPP_EMPLOYEEUI_H
