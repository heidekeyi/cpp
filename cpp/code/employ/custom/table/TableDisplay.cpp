//
// Created by 12131 on 2021/9/3.
//

#include "TableDisplay.h"
#include "../../../utils/display/DisplayUtils.h"
#include <iostream>


namespace employ::custom::table {
    using std::cout, std::endl;
    using utils::DisplayUtils;

    void TableDisplay::base(const BaseTable &obj) {
        base(vector<BaseTable>{obj});
    }

    void TableDisplay::base(const vector<BaseTable> &v) {
        auto align = DisplayUtils::left();
        auto wId = DisplayUtils::width(6);
        auto wCreateTime = DisplayUtils::width(21);
        cout << align << wId << "id"
             << "createTime" << align << wCreateTime
             << endl;
        for (auto &it : v) {
            cout << align << wId << it.id()
                 << align << wCreateTime << it.createTime()
                 << endl;
        }
    }

    void TableDisplay::amount(const AmountTable &obj) {
        amount(vector<AmountTable>{obj});
    }


    void TableDisplay::amount(const vector<AmountTable> &v) {
        auto align = DisplayUtils::left();
        auto wId = DisplayUtils::width(6);
        auto wCreateTime = DisplayUtils::width(21);
        auto wEmpId = DisplayUtils::width(8);
        auto wAmount = DisplayUtils::width(8);
        cout << align << wId << "id"
             << align << wCreateTime << "createTime"
             << align << wEmpId << "empId"
             << align << wAmount << "amount"
             << endl;
        for (auto &it : v) {
            cout << align << wId << it.id()
                 << align << wCreateTime << it.createTime()
                 << align << wEmpId << it.empId()
                 << align << wAmount << it.amount()
                 << endl;
        }
    }

    void TableDisplay::employee(const EmployeeTable &obj) {
        employee(vector<EmployeeTable>{obj});
    }

    void TableDisplay::employee(const vector<EmployeeTable> &v) {
        auto align = DisplayUtils::left();
        auto wId = DisplayUtils::width(6);
        auto wTime = DisplayUtils::width(21);
        auto wEmpNo = DisplayUtils::width(8);
        auto wName = DisplayUtils::width(8);
        cout << align << wId << "id"
             << align << wTime << "createTime"
             << align << wEmpNo << "empNo"
             << align << wName << "name"
             << align << wTime << "hireTime"
             << align << wTime << "fireTime"
             << endl;
        for (auto &it : v) {
            cout << align << wId << it.id()
                 << align << wTime << it.createTime()
                 << align << wEmpNo << it.empNo()
                 << align << wName << it.name()
                 << align << wTime << it.hire()
                 << align << wTime << it.fire()
                 << endl;
        }
    }
}