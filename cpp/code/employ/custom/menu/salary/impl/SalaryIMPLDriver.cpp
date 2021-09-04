//
// Created by 12131 on 2021/9/4.
//


#include <iostream>
#include "SalaryIMPLDriver.h"
#include "SalaryIMPL.h"
#include "../../../controller/amount/AmountController.h"
#include "../../../controller/employee/EmployeeController.h"

namespace employ::custom::menu {
    using std::cout, std::endl;
    using namespace employ::custom::controller;
    using namespace utils;

    SalaryIMPLDriver &SalaryIMPLDriver::display() {
        SalaryIMPL::display("salary impl");
        return *this;
    }

    SalaryIMPLDriver &SalaryIMPLDriver::demote() {
        return *this;
    }

    SalaryIMPLDriver &SalaryIMPLDriver::promote() {
        EmployeeController ce;
        AmountController ca;
        auto first = ce.insert("111", "c++", "2020", "2021");
        auto second = ce.insert("222", "php", "2010", "");
        auto third = ce.insert("333", "lisp", "2010", "");
        ce.insert("333", "lisp", "2010", "");
        ce.insert("333", "lisp", "2010", "");
        ca.insert(first, 1000);
        ca.insert(second, 1000);
        ca.insert(second, 500);
        ca.insert(first, 3000);
        ca.insert(third, 1000);
        showEmployee(ce.hire());
        return *this;
    }

    void SalaryIMPLDriver::showEmployee(const vector<EmployeeTable> &v) {
        for (int i = 0; i < v.size(); ++i) {
            cout.width(3);
            cout << std::right << i + 1 << ") ";
            cout.width(8);
            cout << std::left << v[i].name()
                 << v[i].hire() << endl;
        }
    }
}