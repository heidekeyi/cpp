//
// Created by 12131 on 2021/8/31.
//

#pragma once

#include "../../model/amount/AmountModel.h"
#include "../../table/amount/AmountTable.h"
#include <vector>

namespace employ::custom::controller {
    using namespace employ::custom::model;
    using namespace employ::custom::table;
    using std::vector;

    class AmountController {
    public:
        [[nodiscard]] AmountTable get(size_t id) const;

        [[nodiscard]] vector<AmountTable> get() const;

        [[nodiscard]] vector<int> salary(const vector<size_t> &vEmpId) const;

        size_t insert(size_t empId, int amount);

    private:
        AmountModel model{};
    };
}

