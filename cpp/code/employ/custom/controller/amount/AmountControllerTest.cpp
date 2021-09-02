//
// Created by 12131 on 2021/9/2.
//

#include "AmountControllerTest.h"
#include "AmountController.h"
#include <iostream>
#include <vector>

namespace employ::custom::controller {
    using std::cout, std::endl, std::vector;

    AmountControllerTest &AmountControllerTest::get() {
        AmountController obj;
        cout << obj.insert(300, 3)
             << obj.insert(200, 2000)
             << endl;
        cout << "size: " << obj.get().size() << endl;
        auto it = obj.get(3);
        cout << "id: " << it.id()
             << "\tempId: " << it.empId()
             << "\tamount: " << it.amount()
             << endl;
        return *this;
    }

    AmountControllerTest &AmountControllerTest::salary() {
        AmountController obj;
        const int id = 200;
        auto salary{obj.salary(vector<int>{id})};
        cout << "id: " << id
             << "\tsalary: " << salary[0]
             << endl;
        return *this;
    }

    AmountControllerTest &AmountControllerTest::insert() {
        AmountController obj;
        cout << obj.insert(100, 1)
             << obj.insert(200, 2)
             << endl;
        return *this;
    }
}