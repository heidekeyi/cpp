//
// Created by 12131 on 2021/9/1.
//

#include "TestUI.h"
#include "MenuUI.h"
#include "EmployeeUI.h"
#include <vector>

namespace employ::custom::ui {
    using std::vector;
    using utils::TimeUtils;

    TestUI &TestUI::employee() {
        auto t = TimeUtils::timestamp();
        vector<EmployeeTable> emp{
                EmployeeTable{"10086", "first", TimeUtils::datetime(t - 2), TimeUtils::datetime(t - 180000)},
                EmployeeTable{"777", "second", TimeUtils::datetime(t - 1), TimeUtils::datetime(t - 120000)},
                EmployeeTable{"1890", "alex", TimeUtils::datetime(t - 100), TimeUtils::datetime(0)},
                EmployeeTable{"12315", "test", TimeUtils::datetime(t - 0), TimeUtils::datetime(t - 100000)}
        };
        vector<int> salary{10000, 12000, 8000, 5500};
        EmployeeUI{}.update(emp, salary);
        return *this;
    }

    TestUI &TestUI::menu() {
        MenuUI{}.update();
        return *this;
    }
}