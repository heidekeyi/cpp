//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeModelTest.h"
#include "EmployeeModel.h"
#include <iostream>

namespace employ::custom::model {
    using employ::custom::table::EmployeeTable;
    using std::cout, std::endl;

    EmployeeModelTest &EmployeeModelTest::fetchOne() {
        EmployeeModel obj;
        obj.insert(EmployeeTable{"1", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"3", "mike", "2000", "2001"});
        obj.insert(EmployeeTable{"2", "tim", "2002", "2003"});
        auto it = obj.fetchOne(3);
        cout << "id: " << it.id()
             << "\tempNo: " << it.empNo()
             << "\tname: " << it.name()
             << "\thire: " << it.hire()
             << "\tfire: " << it.fire()
             << endl;
        return *this;
    }

    EmployeeModelTest &EmployeeModelTest::fetchAll() {
        EmployeeModel obj;
        obj.insert(EmployeeTable{"1", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"3", "mike", "2000", "2001"});
        obj.insert(EmployeeTable{"2", "tim", "2002", "2003"});
        cout << "size: " << obj.fetchAll().size() << endl;
        return *this;
    }

    EmployeeModelTest &EmployeeModelTest::insert() {
        EmployeeModel obj;
        cout << obj.insert(EmployeeTable{"1", "alex", "2021", "2021"}) << "\t"
             << obj.insert(EmployeeTable{"3", "mike", "2000", "2001"}) << "\t"
             << obj.insert(EmployeeTable{"2", "tim", "2002", "2003"}) << endl;
        return *this;
    }
}