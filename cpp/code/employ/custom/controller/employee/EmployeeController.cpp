//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeController.h"
#include "../amount/AmountController.h"


namespace employ::custom::controller {
    const EmployeeTable &EmployeeController::get(size_t id) {
        return model.fetchOne(id);
    }

    const vector<EmployeeTable> &EmployeeController::all() {
        return model.fetchAll();
    }

    vector<int> EmployeeController::salary(const vector<EmployeeTable> &employee) {
        vector<size_t> v;
        v.reserve(employee.size());
        for (auto &it : employee) {
            v.push_back(it.id());
        }
        return AmountController{}.salary(v);
    }

    size_t EmployeeController::insert(const string &empNo, const string &name,
                                      const string &hire, const string &fire) {
        return model.insert(EmployeeTable{empNo, name, hire, fire});
    }

    vector <EmployeeTable> EmployeeController::hire() {
        return model.fetchHire();
    }

    vector <EmployeeTable> EmployeeController::fire() {
        return model.fetchFire();
    }
}