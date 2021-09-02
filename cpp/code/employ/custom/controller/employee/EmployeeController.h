//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_EMPLOYEECONTROLLER_H
#define CPP_EMPLOYEECONTROLLER_H

#include "../../table/employee/EmployeeTable.h"
#include "../../model/employee/EmployeeModel.h"
#include <vector>
#include <string>

namespace employ::custom::controller {
    using namespace employ::custom::model;
    using namespace employ::custom::table;
    using std::vector, std::string;

    class EmployeeController {
    public:
        const EmployeeTable &get(int id);

        const vector<EmployeeTable> &get();

        vector<int> salary(const vector<EmployeeTable> &employee);

        int insert(const string &empNo, const string &name,
                   const string &hire, const string &fire);

    private:
        EmployeeModel model{};
    };

}

#endif //CPP_EMPLOYEECONTROLLER_H
