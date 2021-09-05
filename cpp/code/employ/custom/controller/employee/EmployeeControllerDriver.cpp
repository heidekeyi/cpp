//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeControllerDriver.h"


namespace employ::custom::controller {
    EmployeeControllerDriver &EmployeeControllerDriver::get() {
        displayUtils.out("EmployeeControllerDriver::get").next();
        auto &obj{employeeController};
        auto id = obj.insert("n777", "LiMing", "2020", "2021");
        obj.insert("n22", "name12", "2010", "");
        display(obj.get(id));
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::salary() {
        displayUtils.out("EmployeeControllerDriver::salary").next();
        auto &ce{employeeController};
        auto &ca{amountController};
        auto first = ce.insert("111", "c++", "2020", "2021");
        auto second = ce.insert("222", "php", "2010", "");
        auto third = ce.insert("333", "lisp", "2010", "");
        ca.insert(first, 1000);
        ca.insert(second, 1000);
        ca.insert(first, 1000);
        ca.insert(first, -500);
        vector<EmployeeTable> vObject;
        vObject.push_back(ce.get(first));
        vObject.push_back(ce.get(second));
        vObject.push_back(ce.get(third));
        vector<size_t> vId{first, second, third};
        amountControllerDriver.display(vId, EmployeeController::salary(vObject));
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::insert() {
        displayUtils.out("EmployeeControllerDriver::insert").next();
        auto &obj{employeeController};
        displayUtils
                .out(obj.insert("n1", "name1", "2020", "2021")).out("\t")
                .out(obj.insert("n1", "name1", "2020", "2021")).out("\t")
                .out(obj.insert("n1", "name1", "2020", "2021"))
                .next();
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::all() {
        displayUtils.out("EmployeeControllerDriver::all").next();
        auto &obj{employeeController};
        obj.insert("n22", "name12", "2010", "kkk");
        obj.insert("n22", "name12", "2010", "kk");
        obj.insert("n22", "name12", "2010", "");
        obj.insert("n22", "name12", "2010", "k");
        display(obj.all());
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::hire() {
        displayUtils.out("EmployeeControllerDriver::hire").next();
        auto &obj{employeeController};
        obj.insert("n22", "name12", "1111", "");
        obj.insert("n22", "name12", "2222", "1111");
        display(obj.hire());
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::fire() {
        displayUtils.out("EmployeeControllerDriver::fire").next();
        auto &obj{employeeController};
        obj.insert("n22", "name12", "aaa", "");
        obj.insert("n22", "name12", "bbb", "ccc");
        display(obj.fire());
        return *this;
    }

    EmployeeControllerDriver &EmployeeControllerDriver::update() {
        displayUtils.out("EmployeeControllerDriver::update").next();
        auto &obj{employeeController};
        auto id{obj.insert("n22", "name12", "bbb", "ccc")};
        auto tmp{obj.get(id)};
        tmp.empNo("no");
        tmp.hire("2020-1-1");
        obj.update(tmp);
        tmp.empNo("zz");
        tmp.fire("");
        display(obj.get(id));
        display(tmp);
        return *this;
    }

    void EmployeeControllerDriver::display(const EmployeeTable &obj) {
        employeeModelDriver.display(obj);
    }

    void EmployeeControllerDriver::display(const vector<EmployeeTable> &vec) {
        employeeModelDriver.display(vec);
    }
}