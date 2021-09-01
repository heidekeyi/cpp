//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_DISPLAYDRIVER_H
#define CPP_DISPLAYDRIVER_H

namespace employ::custom::driver {
    class DisplayDriver {
    public:
        DisplayDriver &current();

        DisplayDriver &all();

        DisplayDriver &fired();
    };
}


#endif //CPP_DISPLAYDRIVER_H
