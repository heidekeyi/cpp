//
// Created by 12131 on 2021/9/1.
//

#include "AmountTable.h"

namespace employ::custom::table {
    int AmountTable::valCount{1};

    void AmountTable::clearCount() {
        AmountTable::valCount = 1;
    }

    AmountTable::AmountTable(int empId, int amount)
            : BaseTable{AmountTable::valCount},
              valEmpId{empId}, valAmount{amount} {
        ++AmountTable::valCount;
    }

    int AmountTable::empId() const {
        return valEmpId;
    }

    AmountTable &AmountTable::empId(int empId) {
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