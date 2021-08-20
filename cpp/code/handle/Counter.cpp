//
// Created by 12131 on 2021/8/20.
//

#include "Counter.h"
#include <iostream>

using namespace std;

Counter::Counter() : iRef{1} {
    cout << "Counter::Counter()" << endl;
}

Counter::Counter(int x, int y) : point{Point{x, y}}, iRef{1} {
    cout << "Counter::Counter(int x, int y)" << endl;
}

Counter::Counter(const Point &rhs) : point{rhs}, iRef{1} {
    cout << "Counter::Counter(const Point &rhs)" << endl;
}