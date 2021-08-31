//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTCONTROLLER_H
#define CPP_AMOUNTCONTROLLER_H

#include "../model/AmountModel.h"
#include "Controller.h"

namespace employ::custom::AmountController {
    using employ::custom::Controller::Controller;
    using employ::custom::AmountModel::AmountModel;
    using employ::custom::AmountTable::AmountTable;

    class AmountController : public Controller<AmountModel, AmountTable> {
    public:
        AmountController &insert(int empId, int amount) {
            model.insert(AmountTable(model.size() + 1, empId, amount));
            return *this;
        }
    };
}

#endif //CPP_AMOUNTCONTROLLER_H
