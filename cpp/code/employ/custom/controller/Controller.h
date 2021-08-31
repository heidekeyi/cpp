//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_CONTROLLER_H
#define CPP_CONTROLLER_H

#include <vector>

namespace employ::custom::Controller {
    template<typename TModel, typename TTable>
    class Controller {
    public:
         const TTable &query(int id) {
            return model.fetch(id);
        }

        const std::vector<TTable> &query() {
            return model.fetch();
        }

    protected:
        TModel model;
    };
}

#endif //CPP_CONTROLLER_H
