//
// Created by 12131 on 2021/8/20.
//

#include "Line.h"

#include <iostream>

using namespace std;

void Line::draw() {
    cout << "void Line::draw()" << endl;
}

Shape *Line::clone() const {
    cout << "Shape *Line::clone() const" << endl;
    return new Line(*this);
}

Line::~Line() {
    cout << "Line::~Line()" << endl;
}
