//
// Created by 12131 on 2021/9/2.
//

#include "AllUI.h"
#include "../employee/EmployeeUI.h"
#include <iostream>

namespace employ::custom::ui {
    using std::cout, std::endl;

    void AllUI::displayMenu() {
        cout << "all employees information" << endl;
    }

    void AllUI::action() {
        auto employee{vector<EmployeeTable>{}};
        auto salary{vector<int>{}};
        EmployeeUI::display(employee, salary);
    }
}