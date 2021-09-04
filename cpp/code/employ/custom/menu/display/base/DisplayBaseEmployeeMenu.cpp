//
// Created by 12131 on 2021/9/4.
//

#include "DisplayBaseEmployeeMenu.h"

namespace employ::custom::menu {
    void DisplayBaseEmployeeMenu::display(const vector<EmployeeTable> &vEmployee, const vector<int> &vSalary) {
        displayUtils.right()
                .width(3).out("id")
                .width(21).out("createTime")
                .width(8).out("empNo")
                .width(8).out("name")
                .width(10).out("salary")
                .width(21).out("hireTime")
                .width(21).out("fireTime")
                .next();
        for (auto i = 0; i < vEmployee.size(); ++i) {
            auto e = vEmployee[i];
            auto s = vSalary[i];
            displayUtils
                    .width(3).out(e.id())
                    .width(21).out(e.createTime())
                    .width(8).out(e.empNo())
                    .width(8).out(e.name())
                    .width(10).out(s)
                    .width(21).out(e.hire())
                    .width(21).out(e.fire())
                    .next();
        }
    }

    void DisplayBaseEmployeeMenu::displayAll() {
        display(employeeController.all());
    }

    void DisplayBaseEmployeeMenu::displayHire() {
        display(employeeController.hire());
    }

    void DisplayBaseEmployeeMenu::displayFire() {
        display(employeeController.fire());
    }

    void DisplayBaseEmployeeMenu::display(const vector<EmployeeTable> &v) {
        display(v, EmployeeController::salary(v));
    }
}