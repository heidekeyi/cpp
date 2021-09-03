//
// Created by 12131 on 2021/9/2.
//

#include "AllUI.h"
#include <iostream>
#include "../../controller/amount/AmountController.h"
#include "../../controller/employee/EmployeeController.h"
#include "../UIDisplay.h"

namespace employ::custom::ui {
    using std::cout, std::endl;
    using namespace employ::custom::controller;

    void AllUI::displayMenu() {
        cout << "all employees information" << endl;
    }

    void AllUI::action() {
        auto emp{EmployeeController{}.all()};
        auto salary{EmployeeController::salary(emp)};
        UIDisplay::employee(emp, salary);
    }
}