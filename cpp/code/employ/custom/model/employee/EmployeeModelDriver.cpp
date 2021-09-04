//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeModelDriver.h"

namespace employ::custom::model {
    EmployeeModelDriver &EmployeeModelDriver::fetchOne() {
        displayUtils.out("EmployeeModelDriver::fetchOne").next();
        auto obj{employeeModel};
        obj.insert(EmployeeTable{"n0", "alex", "2021", "2021"});
        auto id = obj.insert(EmployeeTable{"n1", "Tom", "2000-1-1", ""});
        obj.insert(EmployeeTable{"n2", "tim", "2002", "2003"});
        display(obj.fetchOne(id));
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::fetchAll() {
        displayUtils.out("EmployeeModelDriver::fetchAll").next();
        auto obj{employeeModel};
        obj.insert(EmployeeTable{"n3", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"n4", "mike", "2000", ""});
        obj.insert(EmployeeTable{"n5", "tim", "2002", ""});
        display(obj.fetchAll());
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::insert() {
        displayUtils.out("EmployeeModelDriver::insert").next();
        auto obj{employeeModel};
        displayUtils
                .out(obj.insert(EmployeeTable{"o1", "n1", "2021", "2021"})).out("\t")
                .out(obj.insert(EmployeeTable{"02", "n2", "2021", "2021"})).out("\t")
                .out(obj.insert(EmployeeTable{"03", "n3", "2021", "2021"}))
                .next();
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::fetchHire() {
        displayUtils.out("EmployeeModelDriver::fetchHire").next();
        auto obj{employeeModel};
        obj.insert(EmployeeTable{"n12", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"n10", "mike", "2000", ""});
        obj.insert(EmployeeTable{"n11", "tim", "2002", ""});
        display(obj.fetchHire());
        return *this;
    }

    EmployeeModelDriver &EmployeeModelDriver::fetchFire() {
        displayUtils.out("EmployeeModelDriver::fetchFire").next();
        auto obj{employeeModel};
        obj.insert(EmployeeTable{"n15", "alex", "2021", "2021"});
        obj.insert(EmployeeTable{"n116", "mike", "2000", ""});
        obj.insert(EmployeeTable{"n17", "tim", "2002", ""});
        display(obj.fetchFire());
        return *this;
    }

    void EmployeeModelDriver::display(const vector<EmployeeTable> &vec) {
        employeeTableDriver.display(vec);
    }

    void EmployeeModelDriver::display(const EmployeeTable &obj) {
        employeeTableDriver.display(obj);
    }
}