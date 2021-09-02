//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_AMOUNTMODELTEST_H
#define CPP_AMOUNTMODELTEST_H
namespace employ::custom::model {
    class AmountModelTest {
    public:
        AmountModelTest &fetchOne();

        AmountModelTest &fetchAll();

        AmountModelTest &fetchSalary();

        AmountModelTest &insert();
    };
}
#endif //CPP_AMOUNTMODELTEST_H
