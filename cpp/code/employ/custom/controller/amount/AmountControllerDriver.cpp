//
// Created by 12131 on 2021/9/2.
//

#include "AmountControllerDriver.h"

namespace employ::custom::controller {
    AmountControllerDriver &AmountControllerDriver::get() {
        displayUtils.out("AmountControllerDriver::get").next();
        auto obj{amountController};
        obj.insert(2, 500);
        auto id = obj.insert(10, 10000);
        obj.insert(1, 1000);
        display(obj.get(id));
        display(obj.get());
        return *this;
    }

    AmountControllerDriver &AmountControllerDriver::salary() {
        displayUtils.out("AmountControllerDriver::salary").next();
        auto obj{amountController};
        obj.insert(2, 500);
        obj.insert(10, 1000);
        obj.insert(3, 1000);
        vector<size_t> v{1, 2, 10};
        display(v, obj.salary(v));
        return *this;
    }

    AmountControllerDriver &AmountControllerDriver::insert() {
        displayUtils.out("AmountControllerDriver::insert").next();
        auto obj{amountController};
        displayUtils
                .out(obj.insert(3, 500)).out("\t")
                .out(obj.insert(3, 500)).out("\t")
                .out(obj.insert(3, 500)).out("\t")
                .next();
        return *this;
    }

    void AmountControllerDriver::display(const vector<AmountTable> &vec) {
        amountModelDriver.display(vec);
    }

    void AmountControllerDriver::display(const AmountTable &obj) {
        amountModelDriver.display(obj);
    }

    void AmountControllerDriver::display(const vector<size_t> &vEmpId, const vector<int> &vSalary) {
        amountModelDriver.display(vEmpId, vSalary);
    }
}