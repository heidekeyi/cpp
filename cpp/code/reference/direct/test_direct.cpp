//
// Created by 12131 on 2021/8/22.
//

#include "test_direct.h"
#include "Handle.h"
#include <iostream>

using namespace std;

void test_reference_direct() {
    cout << __func__ << " start" << endl;
    cout << "init start" << endl;
    Handle handle1 = Handle{1, 2};
    Handle handle2 = handle1;
    handle2 = handle2;
    cout << "init end" << endl;
    handle2.x(10).y(20);
    cout << "handle1.x() = " << handle1.x()
         << "\nhandle1.y() = " << handle1.y()
         << "\nhandle2.x() = " << handle2.x()
         << "\nhandle2.y() = " << handle2.y()
         << endl;
    cout << __func__ << " end" << endl;
}
