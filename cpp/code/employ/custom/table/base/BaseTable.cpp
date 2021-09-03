//
// Created by 12131 on 2021/9/3.
//

#include "BaseTable.h"

namespace employ::custom::table {

    table::BaseTable::BaseTable(size_t id) : valId{id} {

    }

    size_t BaseTable::id() const {
        return valId;
    }

    string BaseTable::createTime() const {
        return valCreateTime;
    }
}