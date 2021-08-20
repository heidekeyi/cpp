//
// Created by 12131 on 2021/8/18.
//

#include "Point.h"

Point::Point() : _x{0}, _y{0} {}

Point::Point(int x, int y) : _x{x}, _y{y} {}


Point &Point::x(int x) {
    _x = x;
    return *this;
}

Point &Point::y(int y) {
    _y = y;
    return *this;
}

int Point::x() const {
    return _x;
}

int Point::y() const {
    return _y;
}
