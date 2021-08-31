//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_STATUSTABLE_H
#define CPP_STATUSTABLE_H

#include "EmployConstraintTable.h"

namespace employ::custom::StatusTable {
    using employ::custom::EmployConstraintTable::EmployConstraintTable;

    class StatusTable : public EmployConstraintTable {
    public:
        StatusTable(int id, int empId, bool status)
                : EmployConstraintTable{id, empId}, valStatus{status} {}

        [[nodiscard]] auto status() const { return valStatus; }

    private:
        bool valStatus;
    };
}

#endif //CPP_STATUSTABLE_H
