//
// Created by 12131 on 2021/9/3.
//

#include "TableDisplay.h"
#include "../../../utils/display/DisplayUtils.h"
#include <iostream>


namespace employ::custom::table {
    using std::cout, std::endl;
    using utils::Display;

    void TableDisplay::base(const BaseTable &obj) {
        auto align = Display::left();
        auto wId = Display::width(5);
        auto wCreateTime = Display::width(21);
        cout << "id" << align << wId
             << "createTime" << align << wCreateTime
             << endl;
//        cout << align << wId << obj.id()
//             << align << wCreateTime << obj.createTime()
//             << endl;
    }

    void TableDisplay::amount(const AmountTable &obj) {
        auto align = Display::left();
        auto wId = Display::width(5);
        auto wCreateTime = Display::width(21);
        auto wEmpId = Display::width(5);
        auto wAmount = Display::width(8);
        cout << "id" << wId
             << "createTime" << wCreateTime
             << "empId" << wEmpId
             << "amount" << wAmount
             << endl;
    }
}