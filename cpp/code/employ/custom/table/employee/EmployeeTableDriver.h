//
// Created by 12131 on 2021/9/2.
//

#pragma once

namespace employ::custom::table {
    class EmployeeTableDriver {
    public:
        EmployeeTableDriver &empNo();

        EmployeeTableDriver &name();

        EmployeeTableDriver &hire();

        EmployeeTableDriver &fire();

        EmployeeTableDriver &clearCount();
    };
}

