//
// Created by 12131 on 2021/9/1.
//

#include "AmountTable.h"

namespace employ::custom::table {
    size_t AmountTable::staticCount{1};

    AmountTable::AmountTable(size_t empId, int amount)
            : BaseTable{AmountTable::staticCount},
              valEmpId{empId}, valAmount{amount} {
        ++AmountTable::staticCount;
    }

    size_t AmountTable::empId() const {
        return valEmpId;
    }

    AmountTable &AmountTable::empId(size_t empId) {
        valEmpId = empId;
        return *this;
    }

    int AmountTable::amount() const {
        return valAmount;
    }

    AmountTable &AmountTable::amount(int value) {
        valAmount = value;
        return *this;
    }
}