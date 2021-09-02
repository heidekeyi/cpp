//
// Created by 12131 on 2021/9/2.
//

#include "TestModel.h"
#include "../amount/AmountModelTest.h"
#include "../employee/EmployeeModelTest.h"

namespace employ::custom::model {
    TestModel &TestModel::amountModel() {
        AmountModelTest{}
                .insert()
                .fetchOne()
                .fetchAll()
                .fetchSalary();
        return *this;
    }

    TestModel &TestModel::employeeModel() {
        EmployeeModelTest{}
                .insert()
                .fetchAll()
                .fetchOne();
        return *this;
    }
}