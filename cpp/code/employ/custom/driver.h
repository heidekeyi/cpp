//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "table/base/BaseTableDriver.h"
#include "table/amount/AmountTableTest.h"
namespace employ::custom {
    void driver() {
//        table::BaseTableDriver{}.id().createTime();
        table::AmountTableTest{}.empId().amount().clearCount();
    };
}

