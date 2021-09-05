//
// Created by 12131 on 2021/9/2.
//

#include "AmountModelDriver.h"

namespace employ::custom::model {
    AmountModelDriver &AmountModelDriver::fetchOne() {
        displayUtils.out("AmountModelDriver::fetchOne").next();
        auto obj{amountModel};
        obj.insert(AmountTable{6, 6000});
        auto id = obj.insert(AmountTable{15, 5555});
        obj.insert(AmountTable{4, 4000});
        display(obj.fetchOne(id));
        return *this;
    }

    AmountModelDriver &AmountModelDriver::fetchAll() {
        displayUtils.out("AmountModelDriver::fetchAll").next();
        auto obj{amountModel};
        obj.insert(AmountTable{7, 7000});
        obj.insert(AmountTable{9, 9000});
        obj.insert(AmountTable{8, 8000});
        display(obj.fetchAll());
        return *this;
    }

    AmountModelDriver &AmountModelDriver::fetchSalary() {
        displayUtils.out("AmountModelDriver::fetchSalary").next();
        auto obj{amountModel};
        obj.insert(AmountTable{22, 1000});
        obj.insert(AmountTable{11, 1000});
        obj.insert(AmountTable{11, 600});
        obj.insert(AmountTable{22, 1000});
        obj.insert(AmountTable{33, 9000});
        obj.insert(AmountTable{11, 300});
        vector<size_t> v{11, 22, 33, 3, 9};
        display(v, obj.fetchSalary(v));
        return *this;
    }

    AmountModelDriver &AmountModelDriver::insert() {
        displayUtils.out("AmountModelDriver::insert").next();
        auto obj{amountModel};
        displayUtils
                .out(obj.insert(AmountTable{2, 2000})).out("\t")
                .out(obj.insert(AmountTable{3, 3000})).out("\t")
                .out(obj.insert(AmountTable{1, 1000}))
                .next();
        return *this;
    }

    void AmountModelDriver::display(const vector<AmountTable> &vec) {
        amountTableDriver.display(vec);
    }

    void AmountModelDriver::display(const AmountTable &obj) {
        amountTableDriver.display(obj);
    }

    void AmountModelDriver::display(const vector<size_t> &vEmpId, const vector<int> &vSalary) {
        displayUtils.right()
                .width(10).out("empId")
                .width(10).out("amount")
                .next();
        for (int i = 0; i < vEmpId.size(); ++i) {
            displayUtils.right()
                    .width(10).out(vEmpId[i])
                    .width(10).out(vSalary[i])
                    .next();
        }
    }
}