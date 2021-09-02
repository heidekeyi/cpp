//
// Created by 12131 on 2021/9/2.
//

#include "TestController.h"
#include "../amount/AmountControllerTest.h"
#include "../employee/EmployeeControllerTest.h"

namespace employ::custom::controller {

    TestController &TestController::employeeController() {
        EmployeeControllerTest{}.insert().get().salary();
        return *this;
    }

    TestController &TestController::amountController() {
        AmountControllerTest{}.insert().get().salary();
        return *this;
    }
}