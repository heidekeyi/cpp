//
// Created by 12131 on 2021/9/2.
//

#include "TestCustom.h"
#include "../table/test/TestTable.h"
#include "../model/test/TestModel.h"
#include "../ui/test/TestUI.h"
#include "../controller/test/TestController.h"

namespace employ::custom {
    TestCustom &TestCustom::testTable() {
        using table::TestTable;
        TestTable{}.baseTable().amountTable().employeeTable();
        return *this;
    }

    TestCustom &TestCustom::testModel() {
        using model::TestModel;
        TestModel{}.amountModel().employeeModel();
        return *this;
    }

    TestCustom &TestCustom::testUI() {
        using ui::TestUI;
        TestUI{}.quitUI().employeeUI();
        return *this;
    }

    TestCustom &TestCustom::testController() {
        using controller::TestController;
        TestController{}
                .amountController()
                .employeeController();
        return *this;
    }
}