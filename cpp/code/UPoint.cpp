//
// Created by 12131 on 2021/8/19.
//

#include "UPoint.h"

UPoint::UPoint() : u{1} {}

UPoint::UPoint(int x, int y) : p{x, y}, u{1} {}

UPoint::UPoint(const Point &rhs) : p{rhs}, u{1} {}