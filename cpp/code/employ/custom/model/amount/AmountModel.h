//
// Created by 12131 on 2021/8/31.
//

#pragma once

#include "../../table/amount/AmountTable.h"
#include <vector>

namespace employ::custom::model {
    using employ::custom::table::AmountTable;
    using std::vector;

    class AmountModel {
    private:
        static vector<AmountTable> staticDataBase;
    public:
        [[nodiscard]] AmountTable fetchOne(size_t id) const;

        [[nodiscard]] vector<AmountTable> fetchAll() const;

        [[nodiscard]] int fetchSalary(size_t empId) const;

        [[nodiscard]] vector<int> fetchSalary(const vector<size_t> &vEmpId) const;

        size_t insert(const AmountTable &obj);

    private:
        vector<AmountTable> &db{AmountModel::staticDataBase};
    };
}

