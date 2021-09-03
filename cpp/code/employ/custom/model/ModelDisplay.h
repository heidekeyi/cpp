//
// Created by 12131 on 2021/9/3.
//


#pragma once

#include <vector>

namespace employ::custom::model {
    using std::vector;

    class ModelDisplay {
    public:
        static void salary(const vector<size_t> &vEmpId, const vector<int> &vSalary);
    };
}


