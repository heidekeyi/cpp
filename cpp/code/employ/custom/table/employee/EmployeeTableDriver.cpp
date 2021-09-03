//
// Created by 12131 on 2021/9/2.
//

#include "EmployeeTableDriver.h"
#include "EmployeeTable.h"
#include "../TableDisplay.h"
#include <vector>

namespace employ::custom::table {
    using std::vector;

    EmployeeTableDriver &EmployeeTableDriver::empNo() {
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        TableDisplay::employee(obj);
        obj.empNo("No1");
        TableDisplay::employee(obj);
        return *this;
    }

    EmployeeTableDriver &EmployeeTableDriver::name() {
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        TableDisplay::employee(obj);
        obj.name("mike");
        TableDisplay::employee(obj);
        return *this;
    }

    EmployeeTableDriver &EmployeeTableDriver::hire() {
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        TableDisplay::employee(obj);
        obj.hire("2010");
        TableDisplay::employee(obj);
        return *this;
    }

    EmployeeTableDriver &EmployeeTableDriver::fire() {
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        TableDisplay::employee(obj);
        obj.fire("");
        TableDisplay::employee(obj);
        return *this;
    }

    EmployeeTableDriver &EmployeeTableDriver::clearCount() {
        vector<EmployeeTable> v{
                EmployeeTable{"11", "alex", "2000-10-10", "2020-10-10"},
                EmployeeTable{"22", "alex", "2000-10-10", "2020-10-10"},
                EmployeeTable{"33", "alex", "2000-10-10", "2020-10-10"}
        };
        TableDisplay::employee(v);
        EmployeeTable::clearCount();
        EmployeeTable obj{"No100", "alex", "2000-10-10", "2020-10-10"};
        TableDisplay::employee(obj);
        return *this;
    }
}