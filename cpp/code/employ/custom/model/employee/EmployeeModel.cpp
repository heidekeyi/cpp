//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeModel.h"

namespace employ::custom::model {
    vector<EmployeeTable> EmployeeModel::valDataBase;

    size_t EmployeeModel::insert(const EmployeeTable &item) {
        db.push_back(item);
        return db.size() - 1;
    }

    vector<EmployeeTable> EmployeeModel::fetchFire() const {
        vector<EmployeeTable> v;
        for (auto &it:db) {
            if (!isFireTimeEmpty(it)) {
                v.push_back(it);
            }
        }
        return v;
    }

    vector<EmployeeTable> EmployeeModel::fetchHire() const {
        vector<EmployeeTable> v;
        for (auto &it:db) {
            if (isFireTimeEmpty(it)) {
                v.push_back(it);
            }
        }
        return v;
    }

    const vector<EmployeeTable> &EmployeeModel::fetchAll() const {
        return db;
    }

    const EmployeeTable &EmployeeModel::fetchOne(int id) const {
        for (auto &it : db) {
            if (it.id() == id) {
                return it;
            }
        }
        throw "employeeUI of relate id is not exist";
    }

    bool EmployeeModel::isFireTimeEmpty(const EmployeeTable &item) {
        return utils::TimeUtils::empty(item.fire());
    }
}