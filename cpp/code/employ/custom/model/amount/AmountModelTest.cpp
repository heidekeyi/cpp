//
// Created by 12131 on 2021/9/2.
//

#include "AmountModelTest.h"
#include "../../table/amount/AmountTable.h"
#include "AmountModel.h"
#include <iostream>
#include <vector>

namespace employ::custom::model {
    using employ::custom::table::AmountTable;
    using std::cout, std::endl, std::vector;

    AmountModelTest &AmountModelTest::fetchOne() {
        AmountModel obj;
        obj.insert(AmountTable{6, 6000});
        obj.insert(AmountTable{5, 5000});
        obj.insert(AmountTable{4, 4000});
        auto it = obj.fetchOne(6);
        cout << "id: " << it.id()
             << "\tempId: " << it.empId()
             << "\tamount: " << it.amount()
             << endl;
        return *this;
    }

    AmountModelTest &AmountModelTest::fetchAll() {
        AmountModel obj;
        obj.insert(AmountTable{7, 7000});
        obj.insert(AmountTable{9, 9000});
        obj.insert(AmountTable{8, 8000});
        cout << "size: " << obj.fetchAll().size() << endl;
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
        vector<int> vid{11, 22, 33};
        auto vSalary = obj.fetchSalary(vid);
        for (int i = 0; i < vid.size(); ++i) {
            cout << vid[i] << ": " << vSalary[i] << endl;
        }
        return *this;
    }

    AmountModelTest &AmountModelTest::insert() {
        AmountModel obj;
        cout << obj.insert(AmountTable{1, 1000}) << "\t"
             << obj.insert(AmountTable{3, 3000}) << "\t"
             << obj.insert(AmountTable{2, 2000}) << endl;
        return *this;
    }
}