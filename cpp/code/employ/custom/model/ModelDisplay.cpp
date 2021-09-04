//
// Created by 12131 on 2021/9/3.
//

#include "ModelDisplay.h"
#include <iostream>

namespace employ::custom::model {
    using std::cout, std::endl;

    void ModelDisplay::salary(const vector<size_t> &vEmpId, const vector<int> &vSalary) {
        const size_t w[]{6, 8};
        const char *n[]{"empId", "salary"};
        cout.setf(std::ios::left);
        for (auto i = 0; i < sizeof(n) / sizeof(*n); ++i) {
            cout.width(w[i]);
            cout << n[i];
        }
        cout << endl;
        for (auto i = 0, ix = 0; i < vEmpId.size(); ++i, ix = 0) {
            cout.width(w[ix++]);
            cout << vEmpId[i];
            cout.width(w[ix]);
            cout << vSalary[i];
            cout << endl;
        }
    }
}