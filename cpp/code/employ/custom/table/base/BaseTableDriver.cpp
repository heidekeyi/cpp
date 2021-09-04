//
// Created by 12131 on 2021/9/2.
//

#include "BaseTableDriver.h"

namespace employ::custom::table {
    BaseTableDriver &BaseTableDriver::id() {
        displayUtils.out("BaseTableDriver::id").next();
        display(BaseTable{1});
        return *this;
    }

    BaseTableDriver &BaseTableDriver::createTime() {
        displayUtils.out("BaseTableDriver::createTime").next();
        display(BaseTable{100});
        return *this;
    }

    void BaseTableDriver::display(const vector<BaseTable> &vec) {
        displayUtils
                .right().width(8).out("id")
                .width(21).out("createTime").next();
        for (auto &it : vec) {
            displayUtils
                    .width(8).out(it.id())
                    .width(21).out(it.createTime())
                    .next();
        }
    }

    void BaseTableDriver::display(const BaseTable &obj) {
        display(vector<BaseTable>{obj});
    }
}