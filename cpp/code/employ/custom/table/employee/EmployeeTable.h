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
        static int valCount;
    public:
    public:
        static void clearCount();

    public:
        EmployeeTable(string empNo, string name,
                      string hire, string fire);

        [[nodiscard]] const string &empNo() const;

        EmployeeTable &empNo(const string &empNo);

        [[nodiscard]] const string &name() const;

        EmployeeTable &name(const string &name);

        [[nodiscard]] const string &hire() const;

        EmployeeTable &hire(const string &hire);

        [[nodiscard]] const string &fire() const;

        EmployeeTable &fire(const string &fire);
    private:
        string valEmpNo;
        string valName;
        string valFire;
        string valHire;
    };
}

