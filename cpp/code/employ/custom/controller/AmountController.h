//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTCONTROLLER_H
#define CPP_AMOUNTCONTROLLER_H

#include "../model/AmountModel.h"
#include "BaseController.h"

namespace employ::custom::Controller {
    using namespace employ::custom::Model;
    using namespace employ::custom::Table;

    class AmountController : public BaseController<AmountModel, AmountTable> {
    public:
        [[nodiscard]] int salary(int empId) const {
            int sum = 0;
            for (auto &it : model.fetch()) {
                if (it.empId() == empId) {
                    sum += it.amount();
                }
            }
            return sum;
        }
    };
}

#endif //CPP_AMOUNTCONTROLLER_H
