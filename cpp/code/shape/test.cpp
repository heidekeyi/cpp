//
// Created by 12131 on 2021/8/20.
//

#include "test.h"
#include "Proxy.h"
#include "Rect.h"
#include "Line.h"
#include <iostream>

using namespace std;

void test() {
    cout << "test start" << endl;
    cout << "init start" << endl;
    Proxy arrProxy[2] = {Line(), Rect()};
    cout << "init end" << endl;
    cout << "loop start" << endl;
    for (auto &item : arrProxy) {
        item.draw();
    }
    cout << "loop end" << endl;
    cout << "test end" << endl;
}