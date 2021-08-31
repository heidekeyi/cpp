//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_STATUSMODEL_H
#define CPP_STATUSMODEL_H

#include "Model.h"
#include "../table/StatusTable.h"

namespace employ::custom::StatusModel {
    using employ::custom::Model::Model;
    using employ::custom::StatusTable::StatusTable;
    class StatusModel : public Model<StatusTable> {

    };
}
#endif //CPP_STATUSMODEL_H
