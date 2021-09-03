//
// Created by 12131 on 2021/9/2.
//

#include "AllMenu.h"
#include <iostream>
#include "../../controller/amount/AmountController.h"
#include "../../controller/employee/EmployeeController.h"
#include "../MenuDisplay.h"

namespace employ::custom::menu {
    using std::cout, std::endl;
    using namespace employ::custom::controller;

    void AllMenu::display() {
        cout << "all employees information" << endl;
    }

    void AllMenu::action() {
        auto emp{EmployeeController{}.all()};
        auto salary{EmployeeController::salary(emp)};
        MenuDisplay::employee(emp, salary);
    }
}