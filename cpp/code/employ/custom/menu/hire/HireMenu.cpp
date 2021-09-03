//
// Created by 12131 on 2021/9/3.
//

#include "HireMenu.h"
#include <iostream>
#include "../../controller/amount/AmountController.h"
#include "../../controller/employee/EmployeeController.h"
#include "../MenuDisplay.h"

namespace employ::custom::menu {
    using std::cout, std::endl;
    using namespace employ::custom::controller;

    void HireMenu::display() {
        cout << "hiring employees information" << endl;
    }

    void HireMenu::action() {
        auto emp{EmployeeController{}.hire()};
        auto salary{EmployeeController::salary(emp)};
        MenuDisplay::employee(emp, salary);
    }
}