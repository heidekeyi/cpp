//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "EmployeeModel.h"
#include "../../table/employee/EmployeeTableDriver.h"

namespace employ::custom::model {
    using namespace table;

    class EmployeeModelDriver {
    public:
        EmployeeModelDriver &fetchOne();

        EmployeeModelDriver &fetchAll();

        EmployeeModelDriver &insert();

        EmployeeModelDriver &fetchHire();

        EmployeeModelDriver &fetchFire();

        void display(const EmployeeTable &obj);

        void display(const vector<EmployeeTable> &vec);

    private:
        EmployeeModel employeeModel;
        DisplayUtils displayUtils;
        EmployeeTableDriver employeeTableDriver;
    };
}

