
//
// Created by 12131 on 2021/8/31.
//

#include "TestTable.h"
#include "Table.h"
#include "EmployeeTable.h"
#include "AmountTable.h"
#include "StatusTable.h"
#include <iostream>

namespace employ::custom::TestTable {
    using std::cout, std::endl;

    TestTable &TestTable::table() {
        using employ::custom::Table::Table;
        Table table{1};
        cout << table.id() << endl;
        cout << table.time() << endl;
        return *this;
    };

    TestTable &TestTable::employee() {
        using employ::custom::EmployeeTable::EmployeeTable;
        EmployeeTable emp{1, 111, "kkk"};
        cout << emp.id() << endl;
        cout << emp.time() << endl;
        cout << emp.empNo() << endl;
        cout << emp.name() << endl;
        return *this;
    }

    TestTable &TestTable::employeeConstraint() {
        using employ::custom::EmployConstraintTable::EmployConstraintTable;
        EmployConstraintTable emp{10, 111};
        cout << emp.id() << endl;
        cout << emp.time() << endl;
        cout << emp.empId() << endl;
        return *this;
    }

    TestTable &TestTable::amount() {
        using employ::custom::AmountTable::AmountTable;
        using employ::custom::EmployeeTable::EmployeeTable;
        EmployeeTable emp{10, 888888, "kkk"};
        cout << emp.id() << endl;
        cout << emp.time() << endl;
        cout << emp.empNo() << endl;
        cout << emp.name() << endl;

        AmountTable amount{1, emp.id(), 1000};
        cout << amount.id() << endl;
        cout << amount.time() << endl;
        cout << amount.empId() << endl;
        cout << amount.amount() << endl;
        return *this;
    }

    TestTable &TestTable::status() {
        using employ::custom::StatusTable::StatusTable;
        using employ::custom::EmployeeTable::EmployeeTable;
        EmployeeTable emp{10, 888888, "kkk"};
        cout << emp.id() << endl;
        cout << emp.time() << endl;
        cout << emp.empNo() << endl;
        cout << emp.name() << endl;

        StatusTable status{1, emp.id(), false};
        cout << status.id() << endl;
        cout << status.time() << endl;
        cout << status.empId() << endl;
        cout << status.status() << endl;
        return *this;
    }
}