//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTCONTROLLER_H
#define CPP_AMOUNTCONTROLLER_H

#include "../../model/amount/AmountModel.h"
#include "../../table/amount/AmountTable.h"
#include <vector>

namespace employ::custom::controller {
    using namespace employ::custom::model;
    using namespace employ::custom::table;
    using std::vector;

    class AmountController {
    public:
        const AmountTable &get(int id);

        const vector<AmountTable> &get();

        vector<int> salary(const vector<int> &empIds);

        int insert(int empId, int amount);

    private:
        AmountModel model{};
    };
}

#endif //CPP_AMOUNTCONTROLLER_H
