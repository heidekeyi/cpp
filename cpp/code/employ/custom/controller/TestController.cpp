//
// Created by 12131 on 2021/8/31.
//

#include "TestController.h"
#include "AmountController.h"
#include "StatusController.h"
#include "EmployeeController.h"
#include <iostream>

namespace employ::custom::TestController {
    using std::cout, std::endl;

    TestController &TestController::amount() {
        using employ::custom::AmountController::AmountController;
        AmountController controller;
        controller
                .insert(111, 1000)
                .insert(222, 20000);
        cout << controller.query().size() << endl;
        cout << controller.query(1).amount() << endl;
        return *this;
    }

    TestController &TestController::status() {
        using employ::custom::StatusController::StatusController;
        StatusController controller;
        controller
                .insert(111, true)
                .insert(222, false);
        cout << controller.query().size() << endl;
        cout << controller.query(1).status() << endl;
        return *this;
    }

    TestController &TestController::employee() {
        using employ::custom::EmployeeController::EmployeeController;
        EmployeeController controller;
        controller
                .insert(111, "first")
                .insert(222, "second");
        cout << controller.query().size() << endl;
        cout << controller.query(1).name() << endl;
        return *this;
    }
}