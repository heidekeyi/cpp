//
// Created by 12131 on 2021/9/2.
//

#include "TestTable.h"
#include "../base/BaseTableTest.h"
#include "../amount/AmountTableTest.h"
#include "../employee/EmployeeTableTest.h"

namespace employ::custom::table {
    TestTable &TestTable::baseTable() {
        BaseTableTest{}.id().createTime();
        return *this;
    }

    TestTable &TestTable::amountTable() {
        AmountTableTest{}.empId().amount();
        return *this;
    }

    TestTable &TestTable::employeeTable() {
        EmployeeTableTest{}.empNo().name().hire().fire();
        return *this;
    }
}