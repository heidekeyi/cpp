//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeController.h"
#include "../amount/AmountController.h"


namespace employ::custom::controller {
    const EmployeeTable &EmployeeController::get(int id) {
        return model.fetchOne(id);
    }

    const vector<EmployeeTable> &EmployeeController::get() {
        return model.fetchAll();
    }

    vector<int> EmployeeController::salary(const vector<EmployeeTable> &employee) {
        vector<int> v;
        v.reserve(employee.size());
        for (auto &it : employee) {
            v.push_back(it.id());
        }
        return AmountController{}.salary(v);
    }

    int EmployeeController::insert(const string &empNo, const string &name,
                                   const string &hire, const string &fire) {
        return model.insert(EmployeeTable{empNo, name, hire, fire});
    }
}