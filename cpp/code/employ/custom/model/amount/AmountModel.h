//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTMODEL_H
#define CPP_AMOUNTMODEL_H

#include "../../table/amount/AmountTable.h"
#include <vector>

namespace employ::custom::model {
    using employ::custom::table::AmountTable;
    using std::vector;

    class AmountModel {
    private:
        static vector<AmountTable> valDataBase;
    public:
        [[nodiscard]] const auto &fetchAll() const {
            return db;
        }

        [[nodiscard]] const auto &fetchOne(int id) const {
            for (auto &it : db) {
                if (it.id() == id) {
                    return it;
                }
            }
            throw "amountController of relate id is not exist";
        }

        size_t insert(const AmountTable &item) {
            db.push_back(item);
            return db.size() - 1;
        }

        auto fetchSalary(const vector<int> &vec) {
            vector<int> v;
            for (int id : vec) {
                int sum = 0;
                for (auto &it : db) {
                    if (it.empId() == id) {
                        sum += it.amount();
                    }
                }
                v.push_back(sum);
            }
            return v;
        }

    private:
        vector<AmountTable> &db{AmountModel::valDataBase};
    };
}

#endif //CPP_AMOUNTMODEL_H
