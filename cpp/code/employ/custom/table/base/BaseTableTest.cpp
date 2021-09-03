//
// Created by 12131 on 2021/9/2.
//

#include "BaseTableTest.h"
#include "BaseTable.h"
#include "../TableDisplay.h"

namespace employ::custom::table {

    BaseTableTest &BaseTableTest::id() {
        TableDisplay::base(BaseTable{100});
        return *this;
    }

    BaseTableTest &BaseTableTest::createTime() {
        TableDisplay::base(BaseTable{100});
        return *this;
    }
}