//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_BASEDRIVER_H
#define CPP_BASEDRIVER_H

namespace employ::custom::driver {
    class BaseDriver {
    public:
        virtual void driver() = 0;

        virtual void display() = 0;
    };
}
#endif //CPP_BASEDRIVER_H
