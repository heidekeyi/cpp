//
// Created by 12131 on 2021/8/31.
//

#include "TestModel.h"
#include "AmountModel.h"
#include "StatusModel.h"
#include "EmployeeModel.h"
#include <iostream>

namespace employ::custom::TestModel {
    using std::cout, std::endl;

    TestModel &TestModel::status() {
        using employ::custom::StatusModel::StatusModel;
        StatusModel model;
        cout << model.fetch().size() << endl;
        return *this;
    }

    TestModel &TestModel::amount() {
        using employ::custom::AmountModel::AmountModel;
        AmountModel model;
        cout << model.fetch().size() << endl;
        return *this;
    }

    TestModel &TestModel::employee() {
        using employ::custom::EmployeeModel::EmployeeModel;
        EmployeeModel model;
        cout << model.fetch().size() << endl;
        return *this;
    }
}