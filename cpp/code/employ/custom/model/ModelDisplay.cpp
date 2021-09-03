//
// Created by 12131 on 2021/9/3.
//

#include "ModelDisplay.h"
#include "../../../utils/display/DisplayUtils.h"
#include <iostream>

namespace employ::custom::model {
    using utils::DisplayUtils;
    using std::cout, std::endl;

    void ModelDisplay::salary(const vector<size_t> &vEmpId, const vector<int> &vSalary) {
        auto align = DisplayUtils::left();
        auto wEmpId = DisplayUtils::width(6);
        auto wAmount = DisplayUtils::width(8);
        cout << wEmpId << align << "empId"
             << wAmount << align << "salary"
             << endl;
        for (auto i = 0; i < vEmpId.size(); ++i) {
            cout << wEmpId << align << vEmpId[i]
                 << wAmount << align << vSalary[i]
                 << endl;
        }
    }
}