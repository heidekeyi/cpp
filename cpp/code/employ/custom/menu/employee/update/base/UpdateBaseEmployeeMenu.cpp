//
// Created by 12131 on 2021/9/5.
//

#include "UpdateBaseEmployeeMenu.h"

namespace employ::custom::menu {
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
}