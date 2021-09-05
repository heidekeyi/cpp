//
// Created by 12131 on 2021/9/5.
//


#pragma once

#include "../display/DisplayMenu.h"
#include "../../controller/employee/EmployeeController.h"

namespace employ::custom::menu {
    using namespace employ::custom::controller;

    class UpdateMenu : public DisplayMenu {
    protected:
        static size_t cinId();

        static int cinInt();

        static string cinString();

    public:
        void display() override = 0;

        void action() override = 0;

    protected:
        void updateFire();

    private:
        void update(const char *name, void(EmployeeTable &obj, const string &str));

    private:
        EmployeeController employeeController;
    };
}


