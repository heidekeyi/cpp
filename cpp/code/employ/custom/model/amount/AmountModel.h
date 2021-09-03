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
        [[nodiscard]] const AmountTable &fetchOne(size_t id) const;

        [[nodiscard]] const vector<AmountTable> &fetchAll() const;

        int fetchSalary(int empId);

        vector<int> fetchSalary(const vector<int> &vEmpIds);

        size_t insert(const AmountTable &obj);

    private:
        vector<AmountTable> &db{AmountModel::staticDataBase};
    };
}

