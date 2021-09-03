//
// Created by 12131 on 2021/9/2.
//

#include "AmountTableTest.h"
#include "AmountTable.h"
#include "../TableDisplay.h"
#include <vector>

namespace employ::custom::table {
    using std::vector;

    AmountTableTest &AmountTableTest::empId() {
        AmountTable obj{100, 1000};
        TableDisplay::amount(obj);
        obj.empId(1);
        TableDisplay::amount(obj);
        return *this;
    }

    AmountTableTest &AmountTableTest::amount() {
        AmountTable obj{100, 1000};
        TableDisplay::amount(obj);
        obj.amount(-1000);
        TableDisplay::amount(obj);
        return *this;
    }

    AmountTableTest &AmountTableTest::clearCount() {
        vector<AmountTable> v{
                AmountTable{100, 1000},
                AmountTable{200, 2000}
        };
        TableDisplay::amount(v);
        AmountTable::clearCount();
        TableDisplay::amount(AmountTable{100, 200});
        return *this;
    }
}