//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_EMPLOYCONSTRAINTTABLE_H
#define CPP_EMPLOYCONSTRAINTTABLE_H

#include "Table.h"

namespace employ::custom::EmployConstraintTable {
    using employ::custom::Table::Table;

    class EmployConstraintTable : public Table {
    public:
        EmployConstraintTable(int id, int empId)
                : Table{id}, valEmpId{empId} {}

        [[nodiscard]] auto empId() const { return valEmpId; }

    protected:
        int valEmpId;
    };
}

#endif //CPP_EMPLOYCONSTRAINTTABLE_H
