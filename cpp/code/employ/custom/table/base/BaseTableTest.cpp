//
// Created by 12131 on 2021/9/2.
//

#include "BaseTableTest.h"
#include "BaseTable.h"
#include <iostream>

namespace employ::custom::table {
    using std::cout, std::endl;

    BaseTableTest &BaseTableTest::id() {
        BaseTable base{100};
        cout << "id: " << base.id() << endl;
        return *this;
    }

    BaseTableTest &BaseTableTest::createTime() {
        BaseTable base{100};
        cout << "createTime: " << base.createTime() << endl;
        return *this;
    }
}