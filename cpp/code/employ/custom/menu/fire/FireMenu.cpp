//
// Created by 12131 on 2021/9/3.
//

#include "FireMenu.h"
#include <iostream>
#include "../../controller/amount/AmountController.h"
#include "../../controller/employee/EmployeeController.h"
#include "../MenuDisplay.h"

namespace employ::custom::menu {
    using std::cout, std::endl;
    using namespace employ::custom::controller;

    void FireMenu::display() {
        cout << "fired employees information" << endl;
    }

    void FireMenu::action() {
        auto emp{EmployeeController{}.fire()};
        auto salary{EmployeeController::salary(emp)};
        MenuDisplay::employee(emp, salary);
    }
}