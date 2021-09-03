//
// Created by 12131 on 2021/9/3.
//

#ifndef CPP_TESTEMPLOYCUSTOM_H
#define CPP_TESTEMPLOYCUSTOM_H

#include "table/base/BaseTableTest.h"

namespace employ::custom::test {
    using namespace employ::custom::table;
    void employCustomTest() {
        BaseTableTest{}.id().createTime();
    }
}
#endif //CPP_TESTEMPLOYCUSTOM_H
