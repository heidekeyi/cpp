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
}