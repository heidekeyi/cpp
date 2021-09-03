//
// Created by 12131 on 2021/9/2.
//

#include "AmountControllerDriver.h"
#include "AmountController.h"
#include <iostream>
#include "../../table/TableDisplay.h"
#include "../../model/ModelDisplay.h"

namespace employ::custom::controller {
    using std::cout, std::endl, std::vector;
    using namespace employ::custom::table;
    using namespace employ::custom::model;

    AmountControllerDriver &AmountControllerDriver::get() {
        AmountController obj;
        obj.insert(2, 500);
        auto id = obj.insert(10, 10000);
        obj.insert(1, 1000);
        TableDisplay::amount(obj.get(id));
        TableDisplay::amount(obj.get());
        return *this;
    }

    AmountControllerDriver &AmountControllerDriver::salary() {
        AmountController obj;
        obj.insert(2, 500);
        obj.insert(10, 1000);
        obj.insert(3, 1000);
        vector<size_t> v{1, 2, 10};
        ModelDisplay::salary(v, obj.salary(v));
        return *this;
    }

    AmountControllerDriver &AmountControllerDriver::insert() {
        AmountController obj;
        cout << obj.insert(3, 500) << "\t"
             << obj.insert(2, 2000) << "\t"
             << obj.insert(1, 1000) << "\t"
             << endl;
        TableDisplay::amount(AmountModel{}.fetchAll());
        return *this;
    }
}