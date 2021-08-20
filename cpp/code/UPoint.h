//
// Created by 12131 on 2021/8/19.
//

#ifndef CPP_UPOINT_H
#define CPP_UPOINT_H


#include "Point.h"

class Hanlde;

class UPoint {
private:
    friend class Handle;

    Point p;
    int u;

    UPoint();

    UPoint(int x, int y);

    UPoint(const Point &rhs);
};

#endif //CPP_UPOINT_H
