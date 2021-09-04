//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeTableDriver.h"

namespace employ::custom::table {
    EmployeeTableDriver &EmployeeTableDriver::empNo() {
        displayUtils.out("EmployeeTableDriver::empNo").next();
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        display(obj);
        obj.empNo("No1");
        display(obj);
        return *this;
    }

    EmployeeTableDriver &EmployeeTableDriver::name() {
        displayUtils.out("EmployeeTableDriver::name").next();
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        display(obj);
        obj.name("mike");
        display(obj);
        return *this;
    }

    EmployeeTableDriver &EmployeeTableDriver::hire() {
        displayUtils.out("EmployeeTableDriver::hire").next();
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        display(obj);
        obj.hire("2010");
        display(obj);
        return *this;
    }

    EmployeeTableDriver &EmployeeTableDriver::fire() {
        displayUtils.out("EmployeeTableDriver::fire").next();
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        display(obj);
        obj.fire("");
        display(obj);
        return *this;
    }

    void EmployeeTableDriver::display(const vector<EmployeeTable> &vec) {
        displayUtils.right()
                .width(5).out("id")
                .width(21).out("createTime")
                .width(10).out("empNo")
                .width(10).out("name")
                .width(21).out("hireTime")
                .width(21).out("fireTime")
                .next();
        for (auto &it : vec) {
            displayUtils.right()
                    .width(5).out(it.id())
                    .width(21).out(it.createTime())
                    .width(10).out(it.empNo())
                    .width(10).out(it.name())
                    .width(21).out(it.hire())
                    .width(21).out(it.fire())
                    .next();
        }
    }

    void EmployeeTableDriver::display(const EmployeeTable &obj) {
        display(vector<EmployeeTable>{obj});
    }
}