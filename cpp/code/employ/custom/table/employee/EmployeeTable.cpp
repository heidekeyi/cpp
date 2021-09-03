//
// Created by 12131 on 2021/9/1.
//

#include "EmployeeTable.h"

#include <utility>

namespace employ::custom::table {
    int EmployeeTable::valCount{1};

    void EmployeeTable::clearCount() {
        EmployeeTable::valCount = 1;
    }

    EmployeeTable::EmployeeTable(string empNo, string name,
                                 string hire, string fire) :
            BaseTable{EmployeeTable::valCount},
            valEmpNo{std::move(empNo)},
            valName{std::move(name)},
            valHire{std::move(hire)},
            valFire{std::move(fire)} {
        ++EmployeeTable::valCount;
    }

    const string &EmployeeTable::empNo() const {
        return valEmpNo;
    }

    EmployeeTable &EmployeeTable::empNo(const string &empNo) {
        valEmpNo = empNo;
        return *this;
    }

    const string &EmployeeTable::name() const {
        return valName;
    }

    EmployeeTable &EmployeeTable::name(const string &name) {
        valName = name;
        return *this;
    }

    const string &EmployeeTable::hire() const {
        return valHire;
    }

    EmployeeTable &EmployeeTable::hire(const string &hire) {
        valHire = hire;
        return *this;
    }

    const string &EmployeeTable::fire() const {
        return valFire;
    }

    EmployeeTable &EmployeeTable::fire(const string &fire) {
        valFire = fire;
        return *this;
    }

}
