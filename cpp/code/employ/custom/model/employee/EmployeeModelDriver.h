//
// Created by 12131 on 2021/9/2.
//

#ifndef CPP_EMPLOYEEMODELDRIVER_H
#define CPP_EMPLOYEEMODELDRIVER_H
namespace employ::custom::model {
    class EmployeeModelDriver {
    public:
        EmployeeModelDriver &fetchOne();

        EmployeeModelDriver &fetchAll();

        EmployeeModelDriver &insert();

        EmployeeModelDriver &fetchHire();

        EmployeeModelDriver &fetchFire();
    };
}
#endif //CPP_EMPLOYEEMODELDRIVER_H
