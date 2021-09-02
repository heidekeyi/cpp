//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeTableTest.h"
#include "EmployeeTable.h"
#include <iostream>

namespace employ::custom::table {
    static void display(const EmployeeTable &obj);

    EmployeeTableTest &EmployeeTableTest::empNo() {
        EmployeeTable obj{"10080", "alex", "2000-10-10 10:10:10", "2000-10-10 10:10:10"};
        display(obj);
        obj.empNo("12315");
        display(obj);
        return *this;
    }

    EmployeeTableTest &EmployeeTableTest::name() {
        EmployeeTable obj{"10080", "alex", "2000-10-10 10:10:10", "2000-10-10 10:10:10"};
        display(obj);
        obj.name("mike");
        display(obj);
        return *this;
    }

    EmployeeTableTest &EmployeeTableTest::hire() {
        EmployeeTable obj{"10080", "alex", "2000-10-10 10:10:10", "2000-10-10 10:10:10"};
        display(obj);
        obj.hire("2020-02-02 02:02:02");
        display(obj);
        return *this;
    }

    EmployeeTableTest &EmployeeTableTest::fire() {
        EmployeeTable obj{"10080", "alex", "2000-10-10 10:10:10", "2000-10-10 10:10:10"};
        display(obj);
        obj.fire("2010-10-20 10:20:20");
        display(obj);
        return *this;
    }

    static void display(const EmployeeTable &obj) {
        using std::cout, std::endl;
        cout << "id: " << obj.id()
             << "\tempNo: " << obj.empNo()
             << "\tname: " << obj.name()
             << "\thire: " << obj.hire()
             << "\tfire: " << obj.fire()
             << "\tcreateTime: " << obj.createTime()
             << endl;
    }
}