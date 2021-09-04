//
// Created by 12131 on 2021/9/4.
//

#include "BaseSalaryMenu.h"
#include "../../../controller/employee/EmployeeController.h"
#include "../../../../../utils/display/DisplayUtils.h"
#include "../../../controller/amount/AmountController.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;
    using utils::DisplayUtils;

    size_t BaseSalaryMenu::demote() {
        return insert(-1);
    }

    size_t BaseSalaryMenu::promote() {
        return insert(1);
    }

    size_t BaseSalaryMenu::insert(int factor) {
        show();
        cout << "please select employee by id: ";
        size_t id{};
        std::cin >> id;
        cout << "please input amount: ";
        int amount{};
        std::cin >> amount;
        amount = amount < 0 ? -amount : amount;
        return AmountController{}.insert(id, amount * factor);
    }

    void BaseSalaryMenu::show() {
        DisplayUtils displayUtils;
        displayUtils.right()
                .width(5).out("id")
                .width(8).out("empNo")
                .width(8).out("name")
                .width(21).out("hireTime")
                .next();
        auto v = EmployeeController{}.all();
        for (auto &it : v) {
            displayUtils
                    .width(5).out(it.id())
                    .width(8).out(it.empNo())
                    .width(8).out(it.name())
                    .width(21).out(it.hire())
                    .next();
        }
    }
}