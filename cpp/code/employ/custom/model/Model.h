//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_MODEL_H
#define CPP_MODEL_H

#include <vector>

namespace employ::custom::model {
    using std::vector;

    template<typename TTable>
    class Model {
    private:
        static vector<TTable> db;
    public:
        const TTable &fetch(int id) const {
            for (auto &it : db) {
                if (id == it.id()) {
                    return it;
                }
            }
            throw "id is not exist";
        }

        const vector<TTable> &fetch() const {
            return db;
        }

        int insert(const TTable &it) {
            db.push_back(it);
            return db.size() - 1;
        }
    };

    template<typename TTable>
    vector<TTable> Model<TTable>::db;
}

#endif //CPP_MODEL_H
