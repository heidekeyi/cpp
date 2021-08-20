//
// Created by 12131 on 2021/8/20.
//

#ifndef CPP_COUNTER_H
#define CPP_COUNTER_H

#include "Point.h"

class Handle;

// 包含所引用的类和引用次数
// 只用于Handle类,保存引用计数和对象
class Counter {
private:
    friend class Handle;

    Point point;

    int iRef;

    Counter();

    Counter(int x, int y);

    explicit Counter(const Point &rhs);
};

#endif //CPP_COUNTER_H
