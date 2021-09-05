//
// Created by 12131 on 2021/8/31.
//

#pragma once

#include "../base/BaseTable.h"

namespace employ::custom::table {
    class AmountTable : public BaseTable {
    private:
        static size_t staticCount;

    public:
        AmountTable(size_t empId, int amount);

        [[nodiscard]] size_t empId() const;

        AmountTable &empId(size_t empId);

        [[nodiscard]] int amount() const;

        AmountTable &amount(int value);

    private:
        size_t valEmpId;
        int valAmount;
    };


}

