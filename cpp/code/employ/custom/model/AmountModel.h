//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTMODEL_H
#define CPP_AMOUNTMODEL_H

#include "Model.h"
#include "../table/AmountTable.h"

namespace employ::custom::model {
    using employ::custom::table::AmountTable;

    class AmountModel : public Model<AmountTable> {
    public:
        [[nodiscard]] vector<AmountTable> constraintEmpId(const vector<int> &vec) const {
            vector<AmountTable> v;
            auto db = fetch();
            for (auto id : vec) {
                for (auto &it : fetch()) {
                    if (id == it.empId()) {
                        v.push_back(it);
                    }
                }
            }
            return v;
        }

        [[nodiscard]] auto salary(int empId) const {
            auto sum = 0;
            for (auto &it : constraintEmpId(vector<int>{empId})) {
                sum += it.amount();
            }
            return sum;
        }
    };
}

#endif //CPP_AMOUNTMODEL_H
