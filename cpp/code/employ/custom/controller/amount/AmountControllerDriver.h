//
// Created by 12131 on 2021/9/2.
//

#pragma once

#include "AmountController.h"
#include "../../model/amount/AmountModelDriver.h"

namespace employ::custom::controller {
    class AmountControllerDriver {
    public:
        AmountControllerDriver &get();

        AmountControllerDriver &salary();

        AmountControllerDriver &insert();

        void display(const AmountTable &obj);

        void display(const vector<AmountTable> &vec);

        void display(const vector<size_t> &vEmpId, const vector<int> &vSalary);

    private:
        AmountController amountController;
        AmountModelDriver amountModelDriver;
        DisplayUtils displayUtils;
    };
}

