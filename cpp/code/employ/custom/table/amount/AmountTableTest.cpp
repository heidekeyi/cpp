//
// Created by 12131 on 2021/9/2.
//

#include "AmountTableTest.h"
#include "AmountTable.h"
#include <iostream>

namespace employ::custom::table {

    static void display(const AmountTable &obj);

    AmountTableTest &AmountTableTest::empId() {
        AmountTable obj{100, 1000};
        display(obj);
        obj.empId(1);
        display(obj);
        return *this;
    }

    AmountTableTest &AmountTableTest::amount() {
        AmountTable obj{100, 1000};
        display(obj);
        obj.amount(-1000);
        display(obj);
        return *this;
    }

    AmountTableTest &AmountTableTest::clearCount() {
        AmountTable::clearCount();
        return *this;
    }

    static void display(const AmountTable &obj) {
        using std::cout, std::endl;
        cout << "id: " << obj.id()
             << "\tempId: " << obj.empId()
             << "\tamount: " << obj.amount()
             << "\tcreateTime: " << obj.createTime()
             << endl;
    }
}