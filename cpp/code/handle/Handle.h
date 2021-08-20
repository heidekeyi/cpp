//
// Created by 12131 on 2021/8/20.
//

#ifndef CPP_HANDLE_H
#define CPP_HANDLE_H

#include "Point.h"
#include "Counter.h"

// 包含一个引用计数类
// 有引用计数类所引用类所用接口
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
    void copyOnWrite();
    Counter *pCounter;
};

#endif //CPP_HANDLE_H
