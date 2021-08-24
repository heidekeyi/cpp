//
// Created by 12131 on 2021/8/22.
//

#ifndef CPP_HANDLE_H
#define CPP_HANDLE_H

#include "../Point.h"

class Handle {
public:
    Handle();

    Handle(int x, int y);

    explicit Handle(const Point &rhs);

    Handle(const Handle &rhs);

    Handle &operator=(const Handle &rhs);

    ~Handle();

    int x() const;

    int y() const;

    Handle &x(int x);

    Handle &y(int y);

private:
    Point *pPoint;
    int *pICounter;
};

#endif //CPP_HANDLE_H
