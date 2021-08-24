//
// Created by 12131 on 2021/8/20.
//

#include "Point.h"


Point::Point() : iXValue{0}, iYValue{0} {}

Point::Point(int x, int y) : iXValue{x}, iYValue{y} {}

int Point::x() const {
    return iXValue;
}

int Point::y() const {
    return iYValue;
}

Point &Point::x(int x) {
    iXValue = x;
    return *this;
}

Point &Point::y(int y) {
    iYValue = y;
    return *this;
}