//
// Created by 12131 on 2021/9/5.
//

#include "UpdateBaseEmployeeMenu.h"

namespace employ::custom::menu {
    using std::cin;

    size_t UpdateBaseEmployeeMenu::id() {
        size_t val;
        cin >> val;
        return val;
    }

    int UpdateBaseEmployeeMenu::value() {
        int val;
        cin >> val;
        return val;
    }

    string UpdateBaseEmployeeMenu::word() {
        string val;
        cin >> val;
        return val;
    }

    void UpdateBaseEmployeeMenu::empNo(const EmployeeTable &obj) {
        update(obj);
    }

    void UpdateBaseEmployeeMenu::name(const EmployeeTable &obj) {
        update(obj);
    }

    void UpdateBaseEmployeeMenu::hire(const EmployeeTable &obj) {
        update(obj);
    }

    void UpdateBaseEmployeeMenu::fire(const EmployeeTable &obj) {
        update(obj);
    }

    void UpdateBaseEmployeeMenu::update(const EmployeeTable &obj) {
        employeeController.update(obj);
    }

    void UpdateBaseEmployeeMenu::displayEmployee() {
        hireEmployeeMenu.action();
    }

    EmployeeTable UpdateBaseEmployeeMenu::employee(size_t id) {
        return employeeController.get(id);
    }
}