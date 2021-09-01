//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_EMPLOYEETABLE_H
#define CPP_EMPLOYEETABLE_H

#include <string>
#include <utility>
#include "../utils/TimeUtils.h"
#include "./BaseTable.h"

namespace employ::custom::table {
    using std::string;

    class EmployeeTable : public BaseTable {
    private:
        static int valCount;
    public:
        EmployeeTable(string empNo, string name,
                      string hire, string fire)
                : BaseTable(EmployeeTable::valCount++),
                  valEmpNo{std::move(empNo)}, valName{std::move(name)},
                  valHire{std::move(hire)}, valFire{std::move(fire)} {}

        [[nodiscard]] const auto &empNo() const { return valEmpNo; }

        [[nodiscard]] const auto &fire() const { return valFire; }

        [[nodiscard]] const auto &hire() const { return valHire; }

        [[nodiscard]] const auto &name() const { return valName; }

        auto empNo(const string &empNo) {
            valEmpNo = empNo;
            return *this;
        }

        auto fire(const string &fireTime) {
            valFire = fireTime;
            return *this;
        }

        auto hire(const string &hireTime) {
            valHire = hireTime;
            return *this;
        }

        auto name(const string &name) {
            valName = name;
            return *this;
        }

    private:
        string valEmpNo;
        string valName;
        string valFire;
        string valHire;
    };
}
#endif //CPP_EMPLOYEETABLE_H
