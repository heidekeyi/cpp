//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_MENUUI_H
#define CPP_MENUUI_H

#include <iostream>

namespace employ::custom::ui {
    using std::cout, std::endl;

    class MenuUI {
    public:
        MenuUI &update() {
            cout << "1) show current employees information" << endl
                 << "2) show all employees information" << endl
                 << "3) show fired employee information" << endl
                 << "4) hire employee" << endl
                 << "5) hire employee" << endl
                 << "6) promote salary" << endl
                 << "7) demote salary" << endl
                 << "q) exit application" << endl;
            return *this;
        }
    };
}
#endif //CPP_MENUUI_H
