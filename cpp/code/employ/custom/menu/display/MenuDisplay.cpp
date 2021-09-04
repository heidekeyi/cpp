//
// Created by 12131 on 2021/9/3.
//

#include "MenuDisplay.h"
#include <iostream>

namespace employ::custom::menu {
    using std::cout, std::endl;

    void MenuDisplay::employee(const vector<EmployeeTable> &vEmp, const vector<int> &vSalary) {
        const size_t w[]{
                6, 21, 8, 8, 8,
                21, 21
        };
        const char *n[]{
                "id", "createTime", "empNo", "name", "salary",
                "hireTime", "fireTime"
        };
        cout.setf(std::ios::left);
        for (int i = 0; i < sizeof(n) / sizeof(*n); ++i) {
            cout.width(w[i]);
            cout << n[i];
        }
        cout << endl;
        for (int i = 0, ix = 0; i < vEmp.size(); ++i, ix = 0) {
            auto &it = vEmp[i];

            cout.width(w[ix++]);
            cout << it.id();

            cout.width(w[ix++]);
            cout << it.createTime();

            cout.width(w[ix++]);
            cout << it.empNo();

            cout.width(w[ix++]);
            cout << it.name();

            cout.width(w[ix++]);
            cout << vSalary[i];

            cout.width(w[ix++]);
            cout << it.hire();

            cout.width(w[ix]);
            cout << it.fire();

            cout << endl;
        }
    }
}