//
// Created by 12131 on 2021/8/20.
//

#include "test_handle.h"
#include "Handle.h"
#include <iostream>

using namespace std;

void test_handle_copy(const Handle &handle);

void test_handle() {
    cout << __func__ << " start" << endl;
    Handle handle1 = Handle{1, 2};
    cout << "**********************" << endl;
    test_handle_copy(handle1);
    cout << "**********************" << endl;
    Handle handle2 = handle1;
    handle2.x(10).y(20);
    cout << "handle1.x() = " << handle1.x()
         << "\nhandle1.y() = " << handle1.y()
         << "\nhandle2.x() = " << handle2.x()
         << "\nhandle2.y() = " << handle2.y()
         << endl;
    cout << __func__ << " end" << endl;
}

void test_handle_copy(const Handle &handle) {
    cout << __func__ << " start" << endl;
    Handle tmp = handle;
    tmp.x(100).y(200);
    cout << "handle1.x() = " << tmp.x()
         << "\nhandle1.y() = " << tmp.y()
         << endl;
    cout << __func__ << " end" << endl;
}