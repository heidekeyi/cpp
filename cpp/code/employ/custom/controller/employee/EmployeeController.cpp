//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeController.h"
#include "../amount/AmountController.h"


namespace employ::custom::controller {
    vector<int> EmployeeController::salary(const vector<EmployeeTable> &employee) {
        vector<size_t> v;
        v.reserve(employee.size());
        for (auto &it : employee) {
            v.push_back(it.id());
        }
        return AmountController{}.salary(v);
    }

    EmployeeTable EmployeeController::get(size_t id) const {
        return model.fetchOne(id);
    }

    vector<EmployeeTable> EmployeeController::all() const {
        return model.fetchAll();
    }

    size_t EmployeeController::insert(const string &empNo, const string &name,
                                      const string &hire, const string &fire) {
        return model.insert(EmployeeTable{empNo, name, hire, fire});
    }

    vector<EmployeeTable> EmployeeController::hire() const {
        return model.fetchHire();
    }

    vector<EmployeeTable> EmployeeController::fire() const {
        return model.fetchFire();
    }
}