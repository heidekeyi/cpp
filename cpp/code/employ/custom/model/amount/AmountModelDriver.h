//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "../../table/amount/AmountTableDriver.h"
#include "AmountModel.h"

namespace employ::custom::model {
    using namespace employ::custom::table;

    class AmountModelDriver {
    public:
        AmountModelDriver &fetchOne();

        AmountModelDriver &fetchAll();

        AmountModelDriver &fetchSalary();

        AmountModelDriver &insert();

        void display(const AmountTable &obj);

        void display(const vector<AmountTable> &vec);

        void display(const vector<size_t> &vEmpId, const vector<int> &vAmount);

    private:
        AmountTableDriver amountTableDriver;
        AmountModel amountModel;
        DisplayUtils displayUtils;
    };
}

