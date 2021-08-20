//
// Created by 12131 on 2021/8/20.
//

#ifndef CPP_PROXY_H
#define CPP_PROXY_H

#include "Shape.h"

// 用Proxy来代理Shape的子对象
// Proxy统一管理Shape的创建和释放
// Shape的virtual clone方法实例化对应的Shape对象
class Proxy {
public:
    Proxy();

//    not explict use to form of Proxy = Shape &
    Proxy(const Shape &rhs);

    Proxy(const Proxy &rhs);

    Proxy &operator=(const Proxy &rhs);

    ~Proxy();

    void draw();

private:
    Shape *pShape;
};

#endif //CPP_PROXY_H
