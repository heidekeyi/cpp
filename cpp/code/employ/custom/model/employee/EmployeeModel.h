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
        [[nodiscard]] const vector<EmployeeTable> &fetchAll() const;

        [[nodiscard]] const EmployeeTable &fetchOne(int id) const;

        size_t insert(const EmployeeTable &item);

        [[nodiscard]] vector<EmployeeTable> fetchFire() const;

        [[nodiscard]] vector<EmployeeTable> fetchHire() const;

    private:
        static bool isFireTimeEmpty(const EmployeeTable &item);

    private:
        vector<EmployeeTable> &db{EmployeeModel::valDataBase};
    };
}
#endif //CPP_EMPLOYEEMODEL_H
