
//
// Created by 12131 on 2021/8/31.
//

#include "TestTable.h"
#include "EmployeeTable.h"
#include "AmountTable.h"
#include <cstdio>

namespace employ::custom::table {
    using std::printf;
    using utils::TimeUtils;

    TestTable &TestTable::employee() {
        auto t = TimeUtils::timestamp();
        EmployeeTable arr[]{
                {"1211309055", "first",  TimeUtils::datetime(t - 2),   TimeUtils::datetime(t - 180000)},
                {"1213173752", "second", TimeUtils::datetime(t - 1),   TimeUtils::datetime(t - 120000)},
                {"100086",     "100086", TimeUtils::datetime(t - 100), TimeUtils::datetime(0)},
                {"166576127",  "first",  TimeUtils::datetime(t - 0),   TimeUtils::datetime(t - 100000)},
        };
        arr[2].name("network");
        for (auto &it : arr) {
            const char *fire = TimeUtils::empty(it.fire()) ? "nil" : it.fire().c_str();
            printf("id: %-2d"
                   "empNo: %-12s"
                   "name: %-12s"
                   "hire: %s "
                   "fire: %-20s"
                   "createTime: %s\n",
                   it.id(), it.empNo().c_str(),
                   it.name().c_str(), it.hire().c_str(),
                   fire, it.createTime().c_str());
        }
        return *this;
    }


    TestTable &TestTable::amount() {
        AmountTable arr[]{{1,   100},
                          {222, 2000}};
        for (auto &it : arr) {
            printf("id: %-2d "
                   "empId: %-8d "
                   "amount: %-8d "
                   "createTime: %s "
                   "\n",
                   it.id(), it.empId(),
                   it.amount(), it.createTime().c_str());
        }
        return *this;
    }
}