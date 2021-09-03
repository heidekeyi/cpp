//
// Created by 12131 on 2021/9/2.
//

#pragma once

namespace employ::custom::model {
    class AmountModelDriver {
    public:
        AmountModelDriver &fetchOne();

        AmountModelDriver &fetchAll();

        AmountModelDriver &fetchSalary();

        AmountModelDriver &insert();
    };
}

