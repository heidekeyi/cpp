//
// Created by 12131 on 2021/9/2.
//

#include "TestUI.h"
#include "../quit/QuitUITest.h"
#include "../employee/EmployeeUITest.h"

namespace employ::custom::ui {
    TestUI &TestUI::quitUI() {
        QuitUITest{}
                .displayMenu()
                .quitStatus()
                .action();
        return *this;
    }

    TestUI &TestUI::employeeUI() {
        EmployeeUITest{}.display();
        return *this;
    }
}