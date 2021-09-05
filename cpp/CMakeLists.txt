cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp
        main.cpp

        code/driver.h
        code/utils/display/DisplayUtils.cpp
        code/utils/display/DisplayUtils.h
        code/utils/display/DisplayUtilsDriver.cpp
        code/utils/display/DisplayUtilsDriver.h
        code/utils/time/TimeUtils.cpp
        code/utils/time/TimeUtils.h
        code/utils/time/TimeUtilsDriver.cpp
        code/utils/time/TimeUtilsDriver.h
        code/utils/stream/StreamUtils.cpp
        code/utils/stream/StreamUtils.h
        code/utils/stream/StreamUtilsDriver.cpp
        code/utils/stream/StreamUtilsDriver.h


        code/employ/app/AppCustom.cpp
        code/employ/app/AppCustom.h


        code/employ/table/base/BaseTable.cpp
        code/employ/table/base/BaseTable.h
        code/employ/table/base/BaseTableDriver.cpp
        code/employ/table/base/BaseTableDriver.h
        code/employ/table/amount/AmountTable.cpp
        code/employ/table/amount/AmountTable.h
        code/employ/table/amount/AmountTableDriver.cpp
        code/employ/table/amount/AmountTableDriver.h
        code/employ/table/employee/EmployeeTable.h
        code/employ/table/employee/EmployeeTable.cpp
        code/employ/table/employee/EmployeeTableDriver.cpp
        code/employ/table/employee/EmployeeTableDriver.h

        code/employ/model/amount/AmountModel.h
        code/employ/model/amount/AmountModel.cpp
        code/employ/model/amount/AmountModelDriver.h
        code/employ/model/amount/AmountModelDriver.cpp
        code/employ/model/employee/EmployeeModel.cpp
        code/employ/model/employee/EmployeeModel.h
        code/employ/model/employee/EmployeeModelDriver.cpp
        code/employ/model/employee/EmployeeModelDriver.h

        code/employ/controller/amount/AmountController.cpp
        code/employ/controller/amount/AmountController.h
        code/employ/controller/amount/AmountControllerDriver.cpp
        code/employ/controller/amount/AmountControllerDriver.h
        code/employ/controller/employee/EmployeeController.cpp
        code/employ/controller/employee/EmployeeController.h
        code/employ/controller/employee/EmployeeControllerDriver.cpp
        code/employ/controller/employee/EmployeeControllerDriver.h

        code/employ/menu/base/BaseMenu.h
        code/employ/menu/quit/QuitMenu.cpp
        code/employ/menu/quit/QuitMenu.h
        code/employ/menu/quit/QuitMenuDriver.cpp
        code/employ/menu/quit/QuitMenuDriver.h
        code/employ/menu/display/DisplayMenu.cpp
        code/employ/menu/display/DisplayMenu.h
        code/employ/menu/all/AllMenu.cpp
        code/employ/menu/all/AllMenu.h
        code/employ/menu/all/AllMenuDriver.cpp
        code/employ/menu/all/AllMenuDriver.h
        code/employ/menu/fired/FiredMenu.cpp
        code/employ/menu/fired/FiredMenu.h
        code/employ/menu/fired/FiredMenuDriver.cpp
        code/employ/menu/fired/FiredMenuDriver.h
        code/employ/menu/hiring/HiringMenu.cpp
        code/employ/menu/hiring/HiringMenu.h
        code/employ/menu/hiring/HiringMenuDriver.cpp
        code/employ/menu/hiring/HiringMenuDriver.h

        code/employ/menu/salary/SalaryMenu.cpp
        code/employ/menu/salary/SalaryMenu.h
        code/employ/menu/demote/DemoteMenu.cpp
        code/employ/menu/demote/DemoteMenu.h
        code/employ/menu/demote/DemoteMenuDriver.cpp
        code/employ/menu/demote/DemoteMenuDriver.h
        code/employ/menu/promote/PromoteMenu.cpp
        code/employ/menu/promote/PromoteMenu.h
        code/employ/menu/promote/PromoteMenuDriver.cpp
        code/employ/menu/promote/PromoteMenuDriver.h
        code/employ/menu/hire/HireMenu.cpp
        code/employ/menu/hire/HireMenu.h
        code/employ/menu/hire/HireMenuDriver.cpp
        code/employ/menu/hire/HireMenuDriver.h
        code/employ/menu/update/UpdateMenu.cpp
        code/employ/menu/update/UpdateMenu.h
        code/employ/menu/fire/FireMenu.cpp
        code/employ/menu/fire/FireMenu.h
        code/employ/menu/fire/FireMenuDriver.cpp
        code/employ/menu/fire/FireMenuDriver.h)
