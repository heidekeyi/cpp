//
// Created by 12131 on 2021/8/31.
//

#ifndef CPP_AMOUNTMODEL_H
#define CPP_AMOUNTMODEL_H

#include "Model.h"
#include "../table/AmountTable.h"

namespace employ::custom::AmountModel {
    using employ::custom::Model::Model;
    using employ::custom::AmountTable::AmountTable;

    class AmountModel : public Model<AmountTable> {

    };
}

#endif //CPP_AMOUNTMODEL_H
