//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_EMPLOYEEMODEL_H
#define CPP_EMPLOYEEMODEL_H

#include "Model.h"
#include "../table/EmployeeTable.h"

namespace employ::custom::EmployeeModel {
    using employ::custom::Model::Model;
    using employ::custom::EmployeeTable::EmployeeTable;

    class EmployeeModel : public Model<EmployeeTable> {

    };
}

#endif //CPP_EMPLOYEEMODEL_H
