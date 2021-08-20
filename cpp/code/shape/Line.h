//
// Created by 12131 on 2021/8/20.
//

#ifndef CPP_LINE_H
#define CPP_LINE_H

#include "Shape.h"

class Line : public Shape {
public:
    void draw() override;

    Shape *clone() const override;
    ~Line();
};

#endif //CPP_LINE_H
