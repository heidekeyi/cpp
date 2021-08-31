//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_TABLE_H
#define CPP_TABLE_H

#include <ctime>

namespace employ::custom::Table {
    class Table {
    public:
        explicit Table(int id) : valId{id} {}

        [[nodiscard]] auto id() const { return valId; }

        [[nodiscard]] auto time() const { return valTime; }

    protected:
        int valId;
        std::time_t valTime{std::time(nullptr)};
    };
}

#endif //CPP_TABLE_H
