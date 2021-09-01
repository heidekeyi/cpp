//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_BASECONTROLLER_H
#define CPP_BASECONTROLLER_H

#include <vector>

namespace employ::custom::Controller {
    template<typename TModel, typename TTable>
    class BaseController {
    public:
        const TTable &query(int id) {
            return model.fetch(id);
        }

        const std::vector<TTable> &query() {
            return model.fetch();
        }

        int insert(const TTable &item) {
            model.insert(item);
            return nextId() - 1;
        }

    protected:
        TModel model;
    };
}

#endif //CPP_BASECONTROLLER_H
