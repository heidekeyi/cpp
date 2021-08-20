//
// Created by 12131 on 2021/8/20.
//


#include "Rect.h"
#include <iostream>

using namespace std;

void Rect::draw() {
    cout << "void Rect::draw()" << endl;
}

Shape *Rect::clone() const {
    cout << "Shape *Rect::clone() const" << endl;
    return new Rect(*this);
}

Rect::~Rect() {
    cout << "Rect::~Rect()" << endl;
}
