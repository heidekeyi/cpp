//
// Created by 12131 on 2021/9/2.
//

#include "AmountController.h"
#include "../../table/amount/AmountTable.h"

namespace employ::custom::controller {

    AmountTable AmountController::get(size_t id) const {
        return model.fetchOne(id);
    }

    vector<AmountTable> AmountController::get() const {
        return model.fetchAll();
    }

    vector<int> AmountController::salary(const vector<size_t> &empId) const {
        return model.fetchSalary(empId);
    }

    size_t AmountController::insert(size_t empId, int amount) {
        return model.insert(AmountTable{empId, amount});
    }
}
