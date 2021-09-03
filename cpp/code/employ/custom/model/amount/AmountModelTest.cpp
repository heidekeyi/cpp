//
// Created by 12131 on 2021/9/2.
//

#include "AmountModelTest.h"
#include "../../table/amount/AmountTable.h"
#include "AmountModel.h"
#include <iostream>
#include <vector>
#include "../../table/TableDisplay.h"
#include "../ModelDisplay.h"

namespace employ::custom::model {
    using namespace employ::custom::table;
    using std::cout, std::endl, std::vector;

    AmountModelTest &AmountModelTest::fetchOne() {
        AmountModel obj;
        obj.insert(AmountTable{6, 6000});
        auto index = obj.insert(AmountTable{15, 5555});
        obj.insert(AmountTable{4, 4000});
        TableDisplay::amount(obj.fetchOne(index + 1));
        return *this;
    }

    AmountModelTest &AmountModelTest::fetchAll() {
        AmountModel obj;
        obj.insert(AmountTable{7, 7000});
        obj.insert(AmountTable{9, 9000});
        obj.insert(AmountTable{8, 8000});
        TableDisplay::amount(obj.fetchAll());
        return *this;
    }

    AmountModelTest &AmountModelTest::fetchSalary() {
        AmountModel obj;
        obj.insert(AmountTable{22, 1000});
        obj.insert(AmountTable{11, 1000});
        obj.insert(AmountTable{11, 600});
        obj.insert(AmountTable{22, 1000});
        obj.insert(AmountTable{33, 9000});
        obj.insert(AmountTable{11, 300});
        vector<size_t> v{11, 22, 33, 3, 9};
        ModelDisplay::salary(v, obj.fetchSalary(v));
        return *this;
    }

    AmountModelTest &AmountModelTest::insert() {
        AmountModel obj;
        cout << obj.insert(AmountTable{1, 1000}) << "\t"
             << obj.insert(AmountTable{3, 3000}) << "\t"
             << obj.insert(AmountTable{2, 2000}) << endl;
        TableDisplay::amount(obj.fetchAll());
        return *this;
    }
}