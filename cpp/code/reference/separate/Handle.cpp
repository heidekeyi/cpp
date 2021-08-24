//
// Created by 12131 on 2021/8/22.
//

#include "Handle.h"
#include "Count.h"
#include <iostream>

using namespace std;

Handle &Handle::x(int x) {
    cout << "Handle &Handle::x(int x)" << endl;
    if (count.makeOnly()) {
        pPoint = new Point{*pPoint};
    }
    pPoint->x(x);
    return *this;
}

Handle &Handle::y(int y) {
    cout << "Handle &Handle::y(int y)" << endl;
    if (count.makeOnly()) {
        pPoint = new Point{*pPoint};
    }
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

Handle::Handle() : pPoint{new Point} {
    cout << "Handle::Handle()" << endl;
}

Handle::Handle(int x, int y) : pPoint{new Point(x, y)} {
    cout << "Handle::Handle(int x, int y)" << endl;
}

Handle::Handle(const Point &rhs) : pPoint{new Point(rhs)} {
    cout << "Handle::Handle(const Point &rhs)" << endl;
}

Handle::Handle(const Handle &rhs) : count{rhs.count}, pPoint{rhs.pPoint} {
    cout << "Handle::Handle(const Handle &rhs)" << endl;
}

Handle &Handle::operator=(const Handle &rhs) {
    cout << "Handle &Handle::operator=(const Handle &rhs)" << endl;
    if (count.reattach(rhs.count)) {
        delete pPoint;
    }
    pPoint = rhs.pPoint;
    return *this;
}

Handle::~Handle() {
    cout << "Handle::~Handle()" << endl;
    if (count.only()) {
        delete pPoint;
    }
}