//
// Created by 12131 on 2021/8/20.
//

#ifndef CPP_PROXY_H
#define CPP_PROXY_H

#include "Shape.h"

class Proxy {
public:
    Proxy();

    Proxy(const Shape &rhs);

    Proxy(const Proxy &rhs);

    Proxy &operator=(const Proxy &rhs);

    ~Proxy();

    void draw();

private:
    Shape *pShape;
};

#endif //CPP_PROXY_H
