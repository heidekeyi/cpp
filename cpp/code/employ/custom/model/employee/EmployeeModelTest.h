//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_EMPLOYEEMODELTEST_H
#define CPP_EMPLOYEEMODELTEST_H
namespace employ::custom::model {
    class EmployeeModelTest {
    public:
        EmployeeModelTest &fetchOne();

        EmployeeModelTest &fetchAll();

        EmployeeModelTest &insert();
    };
}
#endif //CPP_EMPLOYEEMODELTEST_H
