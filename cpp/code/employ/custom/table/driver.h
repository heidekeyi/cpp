//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "base/BaseTableDriver.h"
#include "amount/AmountTableDriver.h"
#include "employee/EmployeeTableDriver.h"

namespace employ::custom::table {
    void driver() {
        BaseTableDriver{}.id().createTime();
        AmountTableDriver{}.empId().amount().clearCount();
        EmployeeTableDriver{}.empNo().name().hire().fire().clearCount();
    }
}


