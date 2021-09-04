//
// Created by 12131 on 2021/9/4.
//

#include "HireEmployeeMenu.h"
#include "../../../controller/employee/EmployeeController.h"
#include "../../../controller/amount/AmountController.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    void HireEmployeeMenu::display() {
        cout << "hire employee" << endl;
    }

    void HireEmployeeMenu::action() {
        using std::cin;
        string empNo, name, hire;
        int salary = 0;
        cout << "please input empNo: ";
        cin >> empNo;
        cout << "please input name: ";
        cin >> name;
        cout << "please input salary: ";
        cin >> salary;
        cout << "please hire time: ";
        cin >> hire;
        auto id = EmployeeController{}.insert(empNo, name, hire, "");
        AmountController{}.insert(id, salary);
    }
}