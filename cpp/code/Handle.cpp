//
// Created by 12131 on 2021/8/18.
//

#include "Handle.h"

Handle::Handle() : up{new UPoint} {}

Handle::Handle(int x, int y) : up{new UPoint(x, y)} {}

Handle::Handle(const Point &rhs) : up{new UPoint(rhs)} {}

Handle::Handle(const Handle &rhs) : up{rhs.up} {
    ++up->u;
}

Handle::~Handle() {
    if (0 == --up->u) {
        delete up;
    }
}

Handle &Handle::operator=(const Handle &rhs) {
    ++rhs.up->u;
    if (0 == --up->u) {
        delete up;
    }
    up = rhs.up;
    return *this;
}

int Handle::x() const {
    return up->p.x();
}

int Handle::y() const {
    return up->p.y();
}

Handle &Handle::x(int x) {
    workWrite();
    up->p.x(x);
    return *this;
}

Handle &Handle::y(int y) {
    workWrite();
    up->p.y(y);
    return *this;
}

void Handle::workWrite() {
    if (1 != up->u) {
        --up->u;
        up = new UPoint(up->p);
    }
}