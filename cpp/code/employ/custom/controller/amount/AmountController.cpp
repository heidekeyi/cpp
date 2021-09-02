//
// Created by 12131 on 2021/9/2.
//

#include "AmountController.h"
#include "../../table/amount/AmountTable.h"

namespace employ::custom::controller {

    const AmountTable &AmountController::get(int id) {
        return model.fetchOne(id);
    }

    const vector<AmountTable> &AmountController::get() {
        return model.fetchAll();
    }

    vector<int> AmountController::salary(const vector<int> &empIds) {
        return model.fetchSalary(empIds);
    }

    int AmountController::insert(int empId, int amount) {
        return model.insert(AmountTable{empId, amount});
    }
}
