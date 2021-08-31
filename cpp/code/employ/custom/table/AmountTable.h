//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTTABLE_H
#define CPP_AMOUNTTABLE_H

#include "EmployConstraintTable.h"

namespace employ::custom::AmountTable {
    using employ::custom::EmployConstraintTable::EmployConstraintTable;

    class AmountTable : public EmployConstraintTable {
    public:
        AmountTable(int id, int empId, int amount)
                : EmployConstraintTable{id, empId}, valAmount{amount} {}

        [[nodiscard]] auto amount() const { return valAmount; }

    private:
        int valAmount;
    };
}
#endif //CPP_AMOUNTTABLE_H
