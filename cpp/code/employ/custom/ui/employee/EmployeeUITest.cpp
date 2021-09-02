//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeUITest.h"
#include "../../table/employee/EmployeeTable.h"
#include <vector>
#include "EmployeeUI.h"

namespace employ::custom::ui {
    using employ::custom::table::EmployeeTable;
    using std::vector;

    EmployeeUITest &EmployeeUITest::display() {
        EmployeeUI::display(vector<EmployeeTable>{}, vector<int>{});
        return *this;
    }
}