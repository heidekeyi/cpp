//
// Created by 12131 on 2021/8/22.
//

#include "Handle.h"
#include <iostream>

using namespace std;

Handle &Handle::x(int x) {
    cout << "Handle &Handle::x(int x)" << endl;
    pPoint->x(x);
    return *this;
}

Handle &Handle::y(int y) {
    cout << "Handle &Handle::y(int y)" << endl;
    pPoint->y(y);
    return *this;
}

int Handle::y() const {
    cout << "int Handle::y() const" << endl;
    return pPoint->y();
}

int Handle::x() const {
    cout << "int Handle::x() const" << endl;
    return pPoint->x();
}

Handle::Handle() : pICounter{new int{1}}, pPoint{new Point} {
    cout << "Handle::Handle()" << endl;
}

Handle::Handle(int x, int y) : pICounter{new int{1}}, pPoint{new Point(x, y)} {
    cout << "Handle::Handle(int x, int y)" << endl;
}

Handle::Handle(const Point &rhs) : pICounter{new int{1}}, pPoint{new Point(rhs)} {
    cout << "Handle::Handle(const Point &rhs)" << endl;
}

Handle::Handle(const Handle &rhs) : pICounter{rhs.pICounter}, pPoint{rhs.pPoint} {
    cout << "Handle::Handle(const Handle &rhs)" << endl;
    ++*pICounter;
}

Handle &Handle::operator=(const Handle &rhs) {
    cout << "Handle &Handle::operator=(const Handle &rhs)" << endl;
    ++*rhs.pICounter;
    if (--*pICounter < 1) {
        delete pICounter;
        delete pPoint;
    }
    pPoint = rhs.pPoint;
    pICounter = rhs.pICounter;
    return *this;
}

Handle::~Handle() {
    cout << "Handle::~Handle()" << endl;
    if (--*pICounter < 1) {
        delete pICounter;
        delete pPoint;
    }
}