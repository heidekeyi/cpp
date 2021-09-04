//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeControllerDriver.h"
#include <iostream>
#include "EmployeeController.h"
#include "../amount/AmountController.h"
#include "../../model/zz/ModelDisplay.h"
#include "../../model/zz/TableDisplay.h"

namespace employ::custom::controller {
    using std::cout, std::endl;

    EmployeeControllerDriver &EmployeeControllerDriver::get() {
        EmployeeController obj;
        auto id = obj.insert("n777", "LiMing", "2020", "2021");
        obj.insert("n22", "name12", "2010", "");
        TableDisplay::employee(obj.get(id));
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::salary() {
        EmployeeController ce;
        AmountController ca;
        auto first = ce.insert("111", "c++", "2020", "2021");
        auto second = ce.insert("222", "php", "2010", "");
        auto third = ce.insert("333", "lisp", "2010", "");
        ca.insert(first, 1000);
        ca.insert(second, 1000);
        ca.insert(first, 1000);
        vector<EmployeeTable> vObject;
        vObject.push_back(ce.get(first));
        vObject.push_back(ce.get(second));
        vObject.push_back(ce.get(third));
        vector<size_t> vId{first, second, third};
        ModelDisplay::salary(vId, EmployeeController::salary(vObject));
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::insert() {
        EmployeeController obj;
        cout << obj.insert("n1", "name1", "2020", "2021") << "\t"
             << obj.insert("n22", "name12", "2010", "") << "\t"
             << endl;
        TableDisplay::employee(EmployeeModel{}.fetchAll());
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::all() {
        EmployeeController obj;
        obj.insert("n22", "name12", "2010", "kkk");
        obj.insert("n22", "name12", "2010", "kk");
        obj.insert("n22", "name12", "2010", "");
        obj.insert("n22", "name12", "2010", "k");
        TableDisplay::employee(obj.all());
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::hire() {
        EmployeeController obj;
        obj.insert("n22", "name12", "1111", "");
        obj.insert("n22", "name12", "2222", "1111");
        TableDisplay::employee(obj.hire());
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::fire() {
        EmployeeController obj;
        obj.insert("n22", "name12", "aaa", "");
        obj.insert("n22", "name12", "bbb", "ccc");
        TableDisplay::employee(obj.fire());
        return *this;
    }
}