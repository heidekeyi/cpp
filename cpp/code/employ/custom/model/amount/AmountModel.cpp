//
// Created by 12131 on 2021/9/2.
//
#include "AmountModel.h"

namespace employ::custom::model {
    vector<AmountTable> AmountModel::staticDataBase;

    AmountTable AmountModel::fetchOne(size_t id) const {
        for (auto &it : db) {
            if (it.id() == id) {
                return it;
            }
        }
        throw "id of data is not exist";
    }

    vector<AmountTable> AmountModel::fetchAll() const {
        return db;
    }

    int AmountModel::fetchSalary(size_t empId) const {
        return fetchSalary(vector<size_t>{empId})[0];
    }

    vector<int> AmountModel::fetchSalary(const vector<size_t> &vEmpIds) const {
        vector<int> v;
        for (auto id : vEmpIds) {
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

    size_t AmountModel::insert(const AmountTable &obj) {
        db.push_back(obj);
        return obj.id();
    }
}