//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeUI.h"
#include <iostream>
#include <iomanip>

namespace employ::custom::ui {
    using std::cout, std::endl, std::setw;
    using utils::TimeUtils;

    void EmployeeUI::display(const vector<EmployeeTable> &employee, const vector<int> &salary) {
        auto left = std::ios::left;
        cout << std::setiosflags(left) << setw(3) << "id"
             << std::setiosflags(left) << setw(6) << "empNo"
             << std::setiosflags(left) << setw(6) << "name"
             << std::setiosflags(left) << setw(8) << "amountController"
             << std::setiosflags(left) << setw(20) << "hireTime"
             << std::setiosflags(left) << setw(20) << "fireTime"
             << std::setiosflags(left) << setw(20) << "createTime"
             << endl;
        for (int i = 0; i < employee.size(); ++i) {
            auto e{employee[i]};
            auto fire = TimeUtils::empty(e.fire()) ? "nil" : e.fire();
            cout << std::setiosflags(left) << setw(3) << e.id()
                 << std::setiosflags(left) << setw(6) << e.empNo()
                 << std::setiosflags(left) << setw(6) << e.name()
                 << std::setiosflags(left) << setw(8) << salary[i]
                 << std::setiosflags(left) << setw(20) << e.hire()
                 << std::setiosflags(left) << setw(20) << fire
                 << std::setiosflags(left) << setw(20) << e.createTime()
                 << endl;
        }
    }
}