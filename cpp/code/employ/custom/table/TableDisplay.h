//
// Created by 12131 on 2021/9/3.
//

#ifndef CPP_TABLEDISPLAY_H
#define CPP_TABLEDISPLAY_H

#include "amount/AmountTable.h"
#include "base/BaseTable.h"

namespace employ::custom::table {
    class TableDisplay {
    public:
        static void base(const BaseTable &obj);
        static void amount(const AmountTable &obj);
    };
}
#endif //CPP_TABLEDISPLAY_H
