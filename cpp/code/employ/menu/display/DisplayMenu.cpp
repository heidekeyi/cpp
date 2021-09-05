//
// Created by 12131 on 2021/9/4.
//

#include "DisplayMenu.h"

namespace employ::custom::menu {
    void DisplayMenu::display(const vector<EmployeeTable> &vEmployee, const vector<int> &vSalary) {
        displayUtils.right()
                .width(3).out("id")
                .width(21).out("createTime")
                .width(10).out("empNo")
                .width(10).out("name")
                .width(10).out("salary")
                .width(12).out("hireTime")
                .width(12).out("fireTime")
                .next();
        for (auto i = 0; i < vEmployee.size(); ++i) {
            auto e = vEmployee[i];
            displayUtils
                    .width(3).out(e.id())
                    .width(21).out(e.createTime())
                    .width(10).out(e.empNo())
                    .width(10).out(e.name())
                    .width(10).out(vSalary[i])
                    .width(12).out(e.hire())
                    .width(12).out(e.fire())
                    .next();
        }
    }

    void DisplayMenu::display(const vector<EmployeeTable> &v) {
        display(v, EmployeeController::salary(v));
    }

    void DisplayMenu::display(const EmployeeTable &obj) {
        display(vector<EmployeeTable>{obj});
    }

    void DisplayMenu::displayAll() {
        display(employeeController.all());
    }

    void DisplayMenu::displayHire() {
        display(employeeController.hire());
    }

    void DisplayMenu::displayFire() {
        display(employeeController.fire());
    }

    void DisplayMenu::displayOne(size_t id) {
        display(employeeController.get(id));
    }
}