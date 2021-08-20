//
// Created by 12131 on 2021/8/20.
//

#ifndef CPP_SHAPE_H
#define CPP_SHAPE_H

#include <iostream>
class Shape {
public:
    virtual void draw() = 0;

    virtual Shape *clone() const = 0;

    virtual ~Shape() {
        std::cout << "Shape::virtual ~Shape()" << std::endl;
    };;
};

#endif //CPP_SHAPE_H
