//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_EMPLOYEEMODEL_H
#define CPP_EMPLOYEEMODEL_H

#include "../../table/employee/EmployeeTable.h"
#include <vector>

namespace employ::custom::model {
    using employ::custom::table::EmployeeTable;
    using std::vector;

    class EmployeeModel {
    private:
        static vector<EmployeeTable> valDataBase;
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
            throw "employeeUI of relate id is not exist";
        }

        size_t insert(const EmployeeTable &item) {
            db.push_back(item);
            return db.size() - 1;
        }

    private:
        vector<EmployeeTable> &db{EmployeeModel::valDataBase};
    };
}
#endif //CPP_EMPLOYEEMODEL_H
