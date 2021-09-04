//
// Created by 12131 on 2021/9/2.
//

#include "DisplayAllEmployeeMenu.h"
#include <iostream>
#include "../../../controller/amount/AmountController.h"
#include "../../../controller/employee/EmployeeController.h"
#include "../MenuDisplay.h"

namespace employ::custom::menu {
    using std::cout, std::endl;
    using namespace employ::custom::controller;

    void DisplayAllEmployeeMenu::display() {
        cout << "all employees information" << endl;
    }

    void DisplayAllEmployeeMenu::action() {
        auto emp{EmployeeController{}.all()};
        auto salary{EmployeeController::salary(emp)};
        MenuDisplay::employee(emp, salary);
    }
}