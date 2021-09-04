//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "EmployeeController.h"
#include "../../model/employee/EmployeeModelDriver.h"
#include "../amount/AmountControllerDriver.h"

namespace employ::custom::controller {
    class EmployeeControllerDriver {
    public:
        EmployeeControllerDriver &get();

        EmployeeControllerDriver &salary();

        EmployeeControllerDriver &insert();

        EmployeeControllerDriver &all();

        EmployeeControllerDriver &hire();

        EmployeeControllerDriver &fire();

        void display(const EmployeeTable &obj);

        void display(const vector<EmployeeTable> &vec);

    private:
        DisplayUtils displayUtils;
        EmployeeController employeeController;
        EmployeeModelDriver employeeModelDriver;
        AmountControllerDriver amountControllerDriver;
        AmountController amountController;
    };
}

