//
// Created by 12131 on 2021/9/3.
//

#include "UIDisplay.h"
#include <iostream>
#include "../../../utils/display/DisplayUtils.h"

namespace employ::custom::ui {
    using std::cout, std::endl;
    using utils::DisplayUtils;

    void UIDisplay::employee(const vector<EmployeeTable> &vEmp, const vector<int> &vSalary) {
        auto align = DisplayUtils::left();
        auto wId = DisplayUtils::width(6);
        auto wTime = DisplayUtils::width(21);
        auto wEmpNo = DisplayUtils::width(8);
        auto wName = DisplayUtils::width(8);
        auto wSalary = DisplayUtils::width(8);
        cout << align << wId << "id"
             << align << wTime << "createTime"
             << align << wEmpNo << "empNo"
             << align << wName << "name"
             << align << wSalary << "salary"
             << align << wTime << "hireTime"
             << align << wTime << "fireTime"
             << endl;
        for (int i = 0; i < vEmp.size(); ++i) {
            auto &it = vEmp[i];
            cout << align << wId << it.id()
                 << align << wTime << it.createTime()
                 << align << wEmpNo << it.empNo()
                 << align << wName << it.name()
                 << align << wSalary << vSalary[i]
                 << align << wTime << it.hire()
                 << align << wTime << it.fire()
                 << endl;
        }
    }
}