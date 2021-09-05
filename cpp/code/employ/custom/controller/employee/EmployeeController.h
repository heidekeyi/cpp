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
        static vector<int> salary(const vector<EmployeeTable> &employee);

    public:
        [[nodiscard]] EmployeeTable get(size_t id) const;

        [[nodiscard]] vector<EmployeeTable> all() const;

        [[nodiscard]] vector<EmployeeTable> hire() const;

        [[nodiscard]] vector<EmployeeTable> fire() const;

        size_t insert(const string &empNo, const string &name,
                      const string &hire, const string &fire);

        void update(const EmployeeTable &obj);

    private:
        EmployeeModel model{};
    };
}


