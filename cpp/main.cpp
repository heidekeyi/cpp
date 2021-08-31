#include "code/employ/custom/controller/TestController.h"
#include "code/employ/custom/model/TestModel.h"
#include "code/employ/custom/table/TestTable.h"

int main() {
    employ::custom::TestController::TestController obj;
    obj.status().employee().amount();
    employ::custom::TestModel::TestModel model;
    model.status().amount().employee();
    employ::custom::TestTable::TestTable table;
    table.table().employee().amount().status().employeeConstraint();
    return 0;
}

