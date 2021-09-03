//
// Created by 12131 on 2021/8/31.
//

#pragma once

#include "../base/BaseTable.h"

namespace employ::custom::table {
    class AmountTable : public BaseTable {
    private:
        static int valCount;
    public:
        static void clearCount();

    public:
        AmountTable(int empId, int amount);

        [[nodiscard]] int empId() const;

        AmountTable &empId(int empId);

        [[nodiscard]] int amount() const;

        AmountTable &amount(int value);

    private:
        int valEmpId;
        int valAmount;
    };


}

