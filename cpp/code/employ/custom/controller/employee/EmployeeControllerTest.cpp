//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeControllerTest.h"
#include <iostream>
#include "EmployeeController.h"
#include "../amount/AmountController.h"

namespace employ::custom::controller {
    using std::cout, std::endl;

    EmployeeControllerTest &EmployeeControllerTest::get() {
        EmployeeController obj;
        obj.insert("no10", "alex", "2010", "2012");
        obj.insert("n33", "33name12", "332010", "332020");
        cout << "size: " << obj.get().size() << endl;
        auto it{obj.get(3)};
        cout << "id: " << it.id()
             << "\tempNo: " << it.empNo()
             << "\tname: " << it.name()
             << "\thire: " << it.hire()
             << "\tfire: " << it.fire()
             << endl;
        return *this;
    }

    EmployeeControllerTest &EmployeeControllerTest::salary() {
        EmployeeController obj;
        obj.insert("no10", "alex", "2010", "2012");
        obj.insert("n33", "33name12", "332010", "332020");
        AmountController c;
        c.insert(1, 100);
        c.insert(2, 200);
        c.insert(5, 500);
        c.insert(2, 100);
        c.insert(5, -300);
        c.insert(5, 600);
        auto emp = obj.get();
        auto salary = obj.salary(emp);
        for (int i = 0; i < emp.size(); ++i) {
            cout << "id: " << emp[i].id()
                 << "\tsalary: " << salary[i]
                 << endl;
        }
        return *this;
    }

    EmployeeControllerTest &EmployeeControllerTest::insert() {
        EmployeeController obj;
        cout << obj.insert("n1", "name1", "2020", "2021")
             << obj.insert("n22", "name12", "2010", "2020")
             << endl;
        return *this;
    }
}