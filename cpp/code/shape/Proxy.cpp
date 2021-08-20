//
// Created by 12131 on 2021/8/20.
//

#include "Proxy.h"
#include <iostream>

using namespace std;

Proxy::Proxy() : pShape{nullptr} {
    cout << "Proxy::Proxy()" << endl;
}

Proxy::Proxy(const Proxy &rhs)
        : pShape{rhs.pShape ? rhs.pShape->clone() : nullptr} {
    cout << "Proxy::Proxy(const Proxy &rhs)" << endl;
}

Proxy &Proxy::operator=(const Proxy &rhs) {
    cout << "Proxy &Proxy::operator=(const Proxy &rhs)" << endl;
    if (this != &rhs) {
        delete pShape;
        pShape = rhs.pShape ? rhs.pShape->clone() : nullptr;
    }
    return *this;
}

Proxy::~Proxy() {
    cout << "Proxy::~Proxy()" << endl;
    delete pShape;
}

Proxy::Proxy(const Shape &rhs) : pShape{rhs.clone()} {
    cout << "Proxy::Proxy(const Shape &rhs)" << endl;
}

void Proxy::draw() {
    cout << "void Proxy::draw()" << endl;
    if (nullptr == pShape) {
        throw "empty Proxy.draw()";
    }
    pShape->draw();
}

