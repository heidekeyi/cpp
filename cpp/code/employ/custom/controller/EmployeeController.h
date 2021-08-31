//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_EMPLOYEECONTROLLER_H
#define CPP_EMPLOYEECONTROLLER_H

#include <string>
#include "../model/EmployeeModel.h"
#include "Controller.h"

namespace employ::custom::EmployeeController {
    using employ::custom::Controller::Controller;
    using employ::custom::EmployeeModel::EmployeeModel;
    using employ::custom::EmployeeTable::EmployeeTable;

    class EmployeeController : public Controller<EmployeeModel, EmployeeTable> {
    public:
        EmployeeController &insert(int empNo, const std::string &name) {
            model.insert(EmployeeTable(model.size() + 1, empNo, name));
            return *this;
        }
    };
}

#endif //CPP_EMPLOYEECONTROLLER_H
