//
// Created by 12131 on 2021/9/4.
//

#include "SalaryMenu.h"
#include "../../controller/amount/AmountController.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;
    using utils::DisplayUtils;

    size_t SalaryMenu::demote() {
        return salary("demote", -1);
    }

    size_t SalaryMenu::promote() {
        return salary("promote", 1);
    }

    size_t SalaryMenu::salary(const char *name, int factor) {
        displayHire();
        cout << "please select employee id: ";
        size_t empId{cinId()};
        cout << "please input " << name << " amount: ";
        int amount{cinInt()};
        auto id = AmountController{}.insert(empId, amount * factor);
        displayOne(empId);
        return id;
    }
}