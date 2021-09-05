//
// Created by 12131 on 2021/9/4.
//


#pragma once

#include <vector>
#include "../base/BaseMenu.h"
#include "../../table/employee/EmployeeTable.h"
#include "../../../utils/display/DisplayUtils.h"
#include "../../controller/employee/EmployeeController.h"

namespace employ::custom::menu {
    using std::vector;
    using namespace employ::custom::table;
    using employ::custom::controller::EmployeeController;

    class DisplayMenu : public BaseMenu {
    public:
        void display() override = 0;

        void action() override = 0;

    protected:
        void displayAll();

        void displayHire();

        void displayFire();

        void displayOne(size_t id);

    private:
        void display(const EmployeeTable &obj);

        void display(const vector<EmployeeTable> &v);

        void display(const vector<EmployeeTable> &vEmployee, const vector<int> &vSalary);

    private:
        utils::DisplayUtils displayUtils;
        EmployeeController employeeController;
    };
}


