//
// Created by 12131 on 2021/9/5.
//


#pragma once

#include "../../../base/BaseMenu.h"
#include "../../../../controller/employee/EmployeeController.h"
#include "../../display/hire/DisplayHireEmployeeMenu.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    class UpdateBaseEmployeeMenu : public BaseMenu {
    protected:
        static size_t id();

        static int value();

        static string word();

    public:
        void display() override = 0;

        void action() override = 0;

    protected:
        void hire(const EmployeeTable &obj);

        void fire(const EmployeeTable &obj);

        void empNo(const EmployeeTable &obj);

        void name(const EmployeeTable &obj);

    protected:
        void displayEmployee();

        EmployeeTable employee(size_t id);

    private:
        void update(const EmployeeTable &obj);

    private:
        EmployeeController employeeController;
        DisplayHireEmployeeMenu hireEmployeeMenu;
    };
}


