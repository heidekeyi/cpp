//
// Created by 12131 on 2021/9/3.
//

#include "HiringMenuDriver.h"
#include "../../controller/amount/AmountController.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    HiringMenuDriver &HiringMenuDriver::display() {
        cout << "HiringMenuDriver::display" << endl;
        displayHireEmployeeMenu.display();
        return *this;
    }

    HiringMenuDriver &HiringMenuDriver::action() {
        cout << "HiringMenuDriver::action" << endl;
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
        displayHireEmployeeMenu.action();
        return *this;
    }
}