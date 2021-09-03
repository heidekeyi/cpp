//
// Created by 12131 on 2021/9/2.
//

#include "BaseTableDriver.h"
#include "BaseTable.h"
#include "../TableDisplay.h"

namespace employ::custom::table {

    BaseTableDriver &BaseTableDriver::id() {
        TableDisplay::base(BaseTable{100});
        return *this;
    }

    BaseTableDriver &BaseTableDriver::createTime() {
        TableDisplay::base(BaseTable{100});
        return *this;
    }
}