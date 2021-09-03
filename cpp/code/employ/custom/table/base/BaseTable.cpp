//
// Created by 12131 on 2021/9/3.
//

#include "BaseTable.h"

namespace employ::custom::table {

    table::BaseTable::BaseTable(int id) : valId{id} {

    }

    int BaseTable::id() const {
        return valId;
    }

    const string &BaseTable::createTime() const {
        return valCreateTime;
    }
}