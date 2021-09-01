//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_STREAMDRIVER_H
#define CPP_STREAMDRIVER_H

#include "BaseDriver.h"
#include <cstdio>

namespace employ::custom::driver {
    class StreamDriver : public BaseDriver {
    public:
        void menu(bool &isExit);

        void display() override;

        void driver() override;

    private:

    };
}
#endif //CPP_STREAMDRIVER_H
