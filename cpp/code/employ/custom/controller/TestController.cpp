//
// Created by 12131 on 2021/8/31.
//

#include "TestController.h"
#include "AmountController.h"
#include "EmployeeController.h"
#include <iostream>

namespace employ::custom::Controller {
    using std::cout, std::endl;

    TestController &TestController::amount() {
        AmountController obj;
        return *this;
    }


    TestController &TestController::employee() {
        return *this;
    }
}