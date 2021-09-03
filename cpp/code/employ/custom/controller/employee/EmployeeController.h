//
// Created by 12131 on 2021/8/31.
//

#pragma once

#include "../../table/employee/EmployeeTable.h"
#include "../../model/employee/EmployeeModel.h"
#include <vector>
#include <string>

namespace employ::custom::controller {
    using namespace employ::custom::model;
    using namespace employ::custom::table;
    using std::vector, std::string;

    class EmployeeController {
    public:
        const EmployeeTable &get(size_t id);

        const vector<EmployeeTable> &all();

        vector <EmployeeTable> hire();

        vector <EmployeeTable> fire();

        static vector<int> salary(const vector<EmployeeTable> &employee);

        size_t insert(const string &empNo, const string &name,
                      const string &hire, const string &fire);

    private:
        EmployeeModel model{};
    };
}


