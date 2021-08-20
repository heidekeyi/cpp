//
// Created by 12131 on 2021/8/18.
//

#ifndef CPP_POINT_H
#define CPP_POINT_H

class Point {
public:
    Point();

    Point(int x, int y);

    int x() const;

    int y() const;

    Point &x(int x);

    Point &y(int y);

private:
    int _x, _y;
};

#endif //CPP_POINT_H
