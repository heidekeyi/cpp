//
// Created by 12131 on 2021/9/1.
//

#include "Entry.h"
#include "driver/StreamDriver.h"
#include <vector>

namespace employ::custom {
    using namespace employ::custom::driver;
    using std::vector;

    void entry() {
        bool isExit = false;
        StreamDriver streamDriver;
        while (!isExit) {
            streamDriver.menu(isExit);
        }
    }
}