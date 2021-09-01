//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_EMPLOYEECONTROLLER_H
#define CPP_EMPLOYEECONTROLLER_H

#include <iostream>
#include "../model/EmployeeModel.h"
#include "AmountController.h"
#include "BaseController.h"
#include "../utils/TimeUtils.h"

namespace employ::custom::Controller {
    using namespace employ::custom::Model;
    using namespace employ::custom::Controller;
    using namespace utils;

    class EmployeeController : public BaseController<EmployeeModel, EmployeeTable> {
    public:
        EmployeeController &show(int id) {
            auto emp = model.fetch(id);
            printf("id: -8%d "
                   "empNo: -8%d "
                   "name: -12%s "
                   "salary: -8%d "
                   "hire: %s ",
                   emp.id(),
                   emp.empNo(),
                   emp.name().c_str(),
                   AmountController{}.salary(id),
                   emp.name().c_str());
            using std::cout, std::endl;
            if (!TimeUtils::empty(emp.fire())) {
                cout << "fire: " << emp.hire();
            }
            cout << endl;
            return *this;
        }
    };
}

#endif //CPP_EMPLOYEECONTROLLER_H
