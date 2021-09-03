//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeModel.h"

namespace employ::custom::model {
    vector<EmployeeTable> EmployeeModel::valDataBase;

    size_t EmployeeModel::insert(const EmployeeTable &obj) {
        db.push_back(obj);
        return obj.id();
    }

    vector<EmployeeTable> EmployeeModel::fetchFire() const {
        vector<EmployeeTable> v;
        for (auto &it:db) {
            if (!it.fire().empty()) {
                v.push_back(it);
            }
        }
        return v;
    }

    vector<EmployeeTable> EmployeeModel::fetchHire() const {
        vector<EmployeeTable> v;
        for (auto &it:db) {
            if (it.fire().empty()) {
                v.push_back(it);
            }
        }
        return v;
    }

    const vector<EmployeeTable> &EmployeeModel::fetchAll() const {
        return db;
    }

    const EmployeeTable &EmployeeModel::fetchOne(size_t id) const {
        for (auto &it : db) {
            if (it.id() == id) {
                return it;
            }
        }
        throw "employeeUI of relate id is not exist";
    }
}