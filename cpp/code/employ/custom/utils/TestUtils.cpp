//
// Created by 12131 on 2021/9/1.
//
#include <iostream>
#include "TestUtils.h"
#include "TimeUtils.h"

using namespace utils;

TestUtils &TestUtils::datetime() {
    std::cout << TimeUtils::datetime(0) << std::endl;
    return *this;
}

TestUtils &TestUtils::timestamp() {
    std::cout << TimeUtils::timestamp() << std::endl;
    return *this;
}


TestUtils &TestUtils::empty() {
    auto a = TimeUtils::datetime(0),
            b = TimeUtils::datetime(1);
    std::cout << TimeUtils::empty(b) << std::endl;
    std::cout << TimeUtils::empty(a) << std::endl;
    return *this;
}
