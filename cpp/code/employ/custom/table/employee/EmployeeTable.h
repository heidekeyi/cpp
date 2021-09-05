//
// Created by 12131 on 2021/8/31.
//

#pragma once

#include <string>
#include <utility>
#include "../base/BaseTable.h"

namespace employ::custom::table {
    using std::string;

    class EmployeeTable : public BaseTable {
    private:
        static size_t staticCount;
    public:
        EmployeeTable(string empNo, string name,
                      string hire, string fire);

        EmployeeTable &operator=(const EmployeeTable &obj);

        [[nodiscard]] string empNo() const;

        EmployeeTable &empNo(const string &empNo);

        [[nodiscard]] string name() const;

        EmployeeTable &name(const string &name);

        [[nodiscard]] string hire() const;

        EmployeeTable &hire(const string &hire);

        [[nodiscard]] string fire() const;

        EmployeeTable &fire(const string &fire);

    private:
        string valEmpNo;
        string valName;
        string valFire;
        string valHire;
    };
}

