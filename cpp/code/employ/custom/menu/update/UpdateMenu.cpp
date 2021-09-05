//
// Created by 12131 on 2021/9/5.
//

#include "UpdateMenu.h"

namespace employ::custom::menu {
    using std::cin;

    size_t UpdateMenu::cinId() {
        size_t val;
        cin >> val;
        return val;
    }

    int UpdateMenu::cinInt() {
        int val;
        cin >> val;
        return val;
    }

    string UpdateMenu::cinString() {
        string val;
        cin >> val;
        return val;
    }

    void UpdateMenu::updateFire() {
        update(
                "fire time",
                [](EmployeeTable &obj, const string &str) { obj.fire(str); }
        );
    }

    void UpdateMenu::update(const char *name, void fn(EmployeeTable &obj, const string &str)) {
        displayHire();
        cout << "please select employee id: ";
        auto id{cinId()};
        cout << "please input " << name << ": ";
        auto str{cinString()};
        auto obj{employeeController.get(id)};
        fn(obj, str);
        employeeController.update(obj);
        displayOne(obj.id());
    }
}