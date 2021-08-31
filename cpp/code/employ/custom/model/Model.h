//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_MODEL_H
#define CPP_MODEL_H

#include <vector>

namespace employ::custom::Model {
    template<typename TTable>
    class Model {
    private:
        static std::vector<TTable> db;
    public:
        const TTable &fetch(int id) const {
            return db[id];
        }

        const std::vector<TTable> &fetch() const {
            return db;
        }

        [[nodiscard]] int size() const {
            return db.size();
        }

        Model &insert(const TTable &it) {
            db.push_back(it);
            return *this;
        }
    };
    template<typename TTable>
    std::vector<TTable> Model<TTable>::db;
}

#endif //CPP_MODEL_H
