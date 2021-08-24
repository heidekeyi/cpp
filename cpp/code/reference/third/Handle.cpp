//
// Created by 12131 on 2021/8/20.
//

#include "Handle.h"
#include <iostream>

using namespace std;

Handle::Handle() : pCounter{new Counter} {
    cout << "Handle::Handle()" << endl;
}

Handle::Handle(int x, int y) : pCounter{new Counter{x, y}} {
    cout << "Handle::Handle(int x, int y)" << endl;
}

Handle::Handle(const Point &rhs) : pCounter{new Counter{rhs}} {
    cout << "Handle::Handle(const Point &rhs)" << endl;
}

Handle::Handle(const Handle &rhs) : pCounter{rhs.pCounter} {
    cout << "Handle::Handle(const Handle &rhs)" << endl;
    ++pCounter->iRef;
}

Handle &Handle::operator=(const Handle &rhs) {
    cout << "Handle &Handle::operator=(const Handle &rhs)" << endl;
    ++rhs.pCounter->iRef;
    if (0 == --pCounter->iRef) {
        delete pCounter;
    }
    pCounter = rhs.pCounter;
    return *this;
}

Handle::~Handle() {
    cout << "Handle::HandleThirdThird()" << endl;
    if (0 == --pCounter->iRef) {
        delete pCounter;
        cout << "******Handle release******" << endl;
    }
}

int Handle::x() const {
    cout << "int Handle::x() const" << endl;
    return pCounter->point.x();
}

int Handle::y() const {
    cout << "int Handle::y() const" << endl;
    return pCounter->point.y();
}

Handle &Handle::x(int x) {
    cout << "Handle &Handle::x(int x)" << endl;
    copyOnWrite();
    pCounter->point.x(x);
    return *this;
}

Handle &Handle::y(int y) {
    cout << "Handle &Handle::y(int y)" << endl;
    copyOnWrite();
    pCounter->point.y(y);
    return *this;
}

void Handle::copyOnWrite() {
    cout << "void Handle::copyOnWrite()" << endl;
    if (1 < pCounter->iRef) {
        --pCounter->iRef;
        pCounter = new Counter{pCounter->point};
    }
}






