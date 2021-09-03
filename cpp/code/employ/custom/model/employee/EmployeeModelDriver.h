//
// Created by 12131 on 2021/9/2.
//

#pragma once

namespace employ::custom::model {
    class EmployeeModelDriver {
    public:
        EmployeeModelDriver &fetchOne();

        EmployeeModelDriver &fetchAll();

        EmployeeModelDriver &insert();

        EmployeeModelDriver &fetchHire();

        EmployeeModelDriver &fetchFire();
    };
}

