//
// Created by 12131 on 2021/8/20.
//

#ifndef CPP_RECT_H
#define CPP_RECT_H

#include "Shape.h"

class Rect : public Shape {
public:
    void draw() override;

    Shape *clone() const override;

    ~Rect();
};

#endif //CPP_RECT_H
