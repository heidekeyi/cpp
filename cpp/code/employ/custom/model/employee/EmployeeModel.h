//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../../table/employee/EmployeeTable.h"
#include <vector>

namespace employ::custom::model {
    using employ::custom::table::EmployeeTable;
    using std::vector;

    class EmployeeModel {
    private:
        static vector<EmployeeTable> valDataBase;
    public:
        [[nodiscard]] const vector<EmployeeTable> &fetchAll() const;

        [[nodiscard]] const EmployeeTable &fetchOne(size_t id) const;

        size_t insert(const EmployeeTable &obj);

        [[nodiscard]] vector<EmployeeTable> fetchFire() const;

        [[nodiscard]] vector<EmployeeTable> fetchHire() const;

    private:
        vector<EmployeeTable> &db{EmployeeModel::valDataBase};
    };
}

