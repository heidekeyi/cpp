//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_TESTTABLE_H
#define CPP_TESTTABLE_H

namespace employ::custom::table {
    class TestTable {
    public:
        TestTable &baseTable();
        TestTable &amountTable();
        TestTable &employeeTable();
    };
}

#endif //CPP_TESTTABLE_H
