//
// Created by 12131 on 2021/9/1.
//

#ifndef CPP_EMPLOYEEUI_H
#define CPP_EMPLOYEEUI_H

#include <vector>
#include "../table/EmployeeTable.h"
#include "../utils/TimeUtils.h"

namespace employ::custom::ui {
    using employ::custom::table::EmployeeTable;
    using utils::TimeUtils;
    using std::vector;

    class EmployeeUI {
    public:
        EmployeeUI &update(const vector<EmployeeTable> &vEmp, const vector<int> &vSalary) {
            for (auto i = 0; i < vEmp.size(); ++i) {
                auto &it = vEmp[i];
                const char *fire = TimeUtils::empty(it.fire()) ? "nil" : it.fire().c_str();
                int salary = vSalary[i];
                printf("createTime: %s "
                       "id: %-3d"
                       "empNo: %-8s"
                       "name: %-8s"
                       "salary: %-6d "
                       "hire: %s "
                       "fire: %s\n",
                       it.createTime().c_str(),
                       it.id(),
                       it.empNo().c_str(),
                       it.name().c_str(),
                       salary,
                       it.hire().c_str(),
                       fire);
            }
            return *this;
        }
    };
}
#endif //CPP_EMPLOYEEUI_H
