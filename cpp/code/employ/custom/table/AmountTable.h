//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTTABLE_H
#define CPP_AMOUNTTABLE_H

#include "BaseTable.h"

namespace employ::custom::table {
    class AmountTable : public BaseTable {
    private:
        static int valCount;
    public:
        AmountTable(int empId, int amount) : valEmpId{empId}, valAmount{amount},
                                             BaseTable(AmountTable::valCount++) {}

        [[nodiscard]] auto empId() const { return valEmpId; }

        [[nodiscard]] auto amount() const { return valAmount; }

        auto empId(int empId) {
            valEmpId = empId;
            return *this;
        }

        auto amount(int amount) {
            valAmount = amount;
            return *this;
        }

    private:
        int valEmpId;
        int valAmount;
    };

}
#endif //CPP_AMOUNTTABLE_H
