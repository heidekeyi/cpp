//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_STATUSCONTROLLER_H
#define CPP_STATUSCONTROLLER_H


#include "../model/StatusModel.h"
#include "Controller.h"

namespace employ::custom::StatusController {
    using employ::custom::Controller::Controller;
    using employ::custom::StatusModel::StatusModel;
    using employ::custom::StatusTable::StatusTable;

    class StatusController : public Controller<StatusModel, StatusTable> {
    public:
        StatusController &insert(int empId, bool status) {
            model.insert(StatusTable(model.size() + 1, empId, status));
            return *this;
        }
    };
}

#endif //CPP_STATUSCONTROLLER_H
