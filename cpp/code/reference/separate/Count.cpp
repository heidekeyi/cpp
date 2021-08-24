//
// Created by 12131 on 2021/8/22.
//

#include "Count.h"

Count::Count() : pICount{new int{1}} {

}

Count::Count(const Count &rhs) : pICount{rhs.pICount} {
    ++*pICount;
}

Count &Count::operator=(const Count &rhs) {
    if (this == &rhs) {

    }
    return *this;
}

Count::~Count() {
    if (--*pICount < 1) {
        delete pICount;
    }
}

bool Count::only() const {
    return 1 == *pICount;
}

bool Count::reattach(const Count &rhs) {
    ++*rhs.pICount;
    const bool status = 0 == --*pICount;
    if (status) {
        delete pICount;
    }
    pICount = rhs.pICount;
    return status;
}

bool Count::makeOnly() {
    if (1 == *pICount) {
        return false;
    }
    --*pICount;
    pICount = new int{1};
    return true;
}
