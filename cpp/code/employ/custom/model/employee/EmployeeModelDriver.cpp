//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeModelDriver.h"
#include "EmployeeModel.h"
#include <iostream>
#include "../../table/TableDisplay.h"

namespace employ::custom::model {
    using namespace employ::custom::table;
    using std::cout, std::endl;

    EmployeeModelDriver &EmployeeModelDriver::fetchOne() {
        EmployeeModel obj;
        obj.insert(EmployeeTable{"n0", "alex", "2021", "2021"});
        auto id = obj.insert(EmployeeTable{"n1", "Tom", "2000-1-1", ""});
        obj.insert(EmployeeTable{"n2", "tim", "2002", "2003"});
        TableDisplay::employee(obj.fetchOne(id));
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::fetchAll() {
        EmployeeModel obj;
        obj.insert(EmployeeTable{"n3", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"n4", "mike", "2000", ""});
        obj.insert(EmployeeTable{"n5", "tim", "2002", ""});
        TableDisplay::employee(obj.fetchAll());
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::insert() {
        EmployeeModel obj;
        cout << obj.insert(EmployeeTable{"n6", "alex", "2021", "2021"}) << "\t"
             << obj.insert(EmployeeTable{"n7", "mike", "2000", "2001"}) << "\t"
             << obj.insert(EmployeeTable{"n9", "tim", "2002", "2003"}) << endl;
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::fetchHire() {
        EmployeeModel obj;
        obj.insert(EmployeeTable{"n12", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"n10", "mike", "2000", ""});
        obj.insert(EmployeeTable{"n11", "tim", "2002", ""});
        TableDisplay::employee(obj.fetchHire());
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::fetchFire() {
        EmployeeModel obj;
        obj.insert(EmployeeTable{"n15", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"n116", "mike", "2000", ""});
        obj.insert(EmployeeTable{"n17", "tim", "2002", ""});
        TableDisplay::employee(obj.fetchFire());
        return *this;
    }
}