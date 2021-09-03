//
// Created by 12131 on 2021/9/3.
//

#include "AllUIDriver.h"
#include "AllUI.h"
#include "../../controller/amount/AmountController.h"
#include "../../controller/employee/EmployeeController.h"

namespace employ::custom::ui {
    using namespace employ::custom::controller;
    using utils::TimeUtils;

    AllUIDriver &AllUIDriver::displayMenu() {
        AllUI{}.displayMenu();
        return *this;
    }

    AllUIDriver &AllUIDriver::action() {
        EmployeeController e;
        AmountController a;
        auto now = TimeUtils::datetime();
        auto t = TimeUtils::timestamp();
        e.insert("n1", "c++", TimeUtils::datetime(t - 512120000), TimeUtils::datetime(t - 2000));
        e.insert("no2", "php", now, "");
        e.insert("N2", "rust", now, "");
        e.insert("S1", "js", TimeUtils::datetime(t - 5000), "");
        a.insert(2, 1000);
        a.insert(2, 5000);
        a.insert(3, 2000);
        a.insert(2, -1500);
        a.insert(1, 3000);
        a.insert(3, 800);
        AllUI{}.action();
        return *this;
    }
}