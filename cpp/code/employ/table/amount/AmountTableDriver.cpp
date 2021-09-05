//
// Created by 12131 on 2021/9/2.
//

#include "AmountTableDriver.h"

namespace employ::custom::table {
    AmountTableDriver &AmountTableDriver::empId() {
        displayUtils.out("AmountTableDriver::empId").next();
        AmountTable obj{100, 1000};
        display(obj);
        obj.empId(1);
        display(obj);
        return *this;
    }

    AmountTableDriver &AmountTableDriver::amount() {
        displayUtils.out("AmountTableDriver::amount").next();
        AmountTable obj{100, 1000};
        display(obj);
        obj.amount(-1000);
        display(obj);
        return *this;
    }

    void AmountTableDriver::display(const vector<AmountTable> &vec) {
        displayUtils.right()
                .width(8).out("id")
                .width(21).out("createTime")
                .width(8).out("empId")
                .width(8).out("amount")
                .next();
        for (auto &it : vec) {
            displayUtils.right()
                    .width(8).out(it.id())
                    .width(21).out(it.createTime())
                    .width(8).out(it.empId())
                    .width(8).out(it.amount())
                    .next();
        }
    }

    void AmountTableDriver::display(const AmountTable &obj) {
        display(vector<AmountTable>{obj});
    }
}