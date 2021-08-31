//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_EMPLOYEETABLE_H
#define CPP_EMPLOYEETABLE_H

#include <string>
#include <utility>
#include "Table.h"

namespace employ::custom::EmployeeTable {
    using employ::custom::Table::Table;

    class EmployeeTable : public Table {
    public:
        EmployeeTable(int id, int empNo, std::string name)
                : Table{id}, valEmpNo{empNo}, valName{std::move(name)} {}

        const auto &name() const { return valName; }

        [[nodiscard]] auto empNo() const { return valEmpNo; }

    private:
        std::string valName;
        int valEmpNo;
    };
}
#endif //CPP_EMPLOYEETABLE_H
