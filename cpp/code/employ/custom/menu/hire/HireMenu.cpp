//
// Created by 12131 on 2021/9/4.
//

#include "HireMenu.h"
#include "../../controller/employee/EmployeeController.h"
#include "../../controller/amount/AmountController.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    void HireMenu::display() {
        cout << "hire employee" << endl;
    }

    void HireMenu::action() {
        cout << "please input empNo: ";
        string empNo{cinString()};
        cout << "please input name: ";
        string name{cinString()};
        cout << "please input salary: ";
        int salary{cinInt()};
        cout << "please hire time: ";
        string hireTime{cinString()};
        auto id = EmployeeController{}.insert(empNo, name, hireTime, "");
        AmountController{}.insert(id, salary);
        displayOne(id);
    }
}