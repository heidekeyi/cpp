//
// Created by 12131 on 2021/8/18.
//

#ifndef CPP_HANDLE_H
#define CPP_HANDLE_H

#include "Point.h"
#include "UPoint.h"

class Handle {
public:
    Handle();

    Handle(int x, int y);

    Handle(const Point &rhs);

    Handle(const Handle &rhs);

    Handle &operator=(const Handle &rhs);

    ~Handle();

    int x() const;

    int y() const;

    Handle &x(int x);

    Handle &y(int y);

private:
    void workWrite();
    UPoint *up;
};

#endif //CPP_HANDLE_H
