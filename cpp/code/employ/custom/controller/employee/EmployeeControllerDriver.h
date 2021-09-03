//
// Created by 12131 on 2021/9/2.
//

#pragma once

namespace employ::custom::controller {
    class EmployeeControllerDriver {
    public:
        EmployeeControllerDriver &get();

        EmployeeControllerDriver &salary();

        EmployeeControllerDriver &insert();

        EmployeeControllerDriver &all();

        EmployeeControllerDriver &hire();

        EmployeeControllerDriver &fire();
    };
}

