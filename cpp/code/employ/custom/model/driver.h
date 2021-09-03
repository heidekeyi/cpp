//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include "amount/AmountModelTest.h"

namespace employ::custom::model {
    void driver() {
        AmountModelTest{}.insert().fetchOne().fetchAll().fetchSalary();
    }
}


