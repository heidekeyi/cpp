//
// Created by 12131 on 2021/8/31.
//

#include "TestModel.h"
#include "AmountModel.h"
#include "EmployeeModel.h"
#include <iostream>

#include "../table/AmountTable.h"
#include "../table/EmployeeTable.h"

namespace employ::custom::model {
    using std::cout, std::endl;
    using namespace employ::custom::table;

    TestModel &TestModel::amount() {
        AmountModel model;
        model.insert(AmountTable{11, 1000});
        model.insert(AmountTable{11, 200});
        model.insert(AmountTable{21, 500});
        model.insert(AmountTable{15, 5000});
        cout << model.fetch().size() << endl;
        cout << model.constraintEmpId(vector<int>{11, 21}).size() << endl;
        cout << model.salary(11) << endl;
        cout << model.fetch(3).empId() << endl;
        return *this;
    }

    TestModel &TestModel::employee() {
        EmployeeModel model;
        auto t = TimeUtils::timestamp();
        model.insert(
                EmployeeTable{"1211309055", "first", TimeUtils::datetime(t - 2), TimeUtils::datetime(t - 180000)});
        model.insert(
                EmployeeTable{"1213173752", "second", TimeUtils::datetime(t - 1), TimeUtils::datetime(t - 120000)});
        model.insert(
                EmployeeTable{"100086", "100086", TimeUtils::datetime(t - 100), TimeUtils::datetime(0)});
        model.insert(
                EmployeeTable{"166576127", "first", TimeUtils::datetime(t - 0), TimeUtils::datetime(t - 100000)});
        cout << model.fetch().size() << endl;
        cout << model.fetch(6).empNo() << endl;
        return *this;
    }
}