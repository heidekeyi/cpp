
namespace employ::custom::main {
    void testUtils();

    void testTable();

    void testModel();

    void testUI();
}

void test() {
    using namespace employ::custom::main;

    testUtils();
    testTable();
    testModel();
    testUI();
}

#include "code/employ/custom/Entry.h"

int main() {
//    test();
    using employ::custom::entry;
    entry();
    return 0;
}

#include "code/employ/custom/utils/TestUtils.h"
#include "code/employ/custom/table/TestTable.h"
#include "code/employ/custom/model/TestModel.h"
#include "code/employ/custom/ui/TestUI.h"

namespace employ::custom::main {
    void testUtils() {
        using namespace utils;
        TestUtils obj;
        obj.datetime().timestamp().empty();
    }

    void testTable() {
        using namespace employ::custom::table;
        TestTable obj;
        obj.amount().employee();
    }

    void testModel() {
        using namespace employ::custom::model;
        TestModel obj;
        obj.amount().employee();
    }

    void testUI() {
        using namespace employ::custom::ui;
        TestUI obj;
        obj.menu().employee();
    }
}











