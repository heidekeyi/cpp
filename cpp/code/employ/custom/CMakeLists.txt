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


        code/employ/custom/app/AppCustom.cpp
        code/employ/custom/app/AppCustom.h


        code/employ/custom/table/base/BaseTable.cpp
        code/employ/custom/table/base/BaseTable.h
        code/employ/custom/table/base/BaseTableDriver.cpp
        code/employ/custom/table/base/BaseTableDriver.h
        code/employ/custom/table/amount/AmountTable.cpp
        code/employ/custom/table/amount/AmountTable.h
        code/employ/custom/table/amount/AmountTableDriver.cpp
        code/employ/custom/table/amount/AmountTableDriver.h
        code/employ/custom/table/employee/EmployeeTable.h
        code/employ/custom/table/employee/EmployeeTable.cpp
        code/employ/custom/table/employee/EmployeeTableDriver.cpp
        code/employ/custom/table/employee/EmployeeTableDriver.h

        code/employ/custom/model/amount/AmountModel.h
        code/employ/custom/model/amount/AmountModel.cpp
        code/employ/custom/model/amount/AmountModelDriver.h
        code/employ/custom/model/amount/AmountModelDriver.cpp
        code/employ/custom/model/employee/EmployeeModel.cpp
        code/employ/custom/model/employee/EmployeeModel.h
        code/employ/custom/model/employee/EmployeeModelDriver.cpp
        code/employ/custom/model/employee/EmployeeModelDriver.h

        code/employ/custom/controller/amount/AmountController.cpp
        code/employ/custom/controller/amount/AmountController.h
        code/employ/custom/controller/amount/AmountControllerDriver.cpp
        code/employ/custom/controller/amount/AmountControllerDriver.h
        code/employ/custom/controller/employee/EmployeeController.cpp
        code/employ/custom/controller/employee/EmployeeController.h
        code/employ/custom/controller/employee/EmployeeControllerDriver.cpp
        code/employ/custom/controller/employee/EmployeeControllerDriver.h

        code/employ/custom/menu/base/BaseMenu.h
        code/employ/custom/menu/quit/QuitMenu.cpp
        code/employ/custom/menu/quit/QuitMenu.h
        code/employ/custom/menu/quit/QuitMenuDriver.cpp
        code/employ/custom/menu/quit/QuitMenuDriver.h
        code/employ/custom/menu/display/DisplayMenu.cpp
        code/employ/custom/menu/display/DisplayMenu.h
        code/employ/custom/menu/all/AllMenu.cpp
        code/employ/custom/menu/all/AllMenu.h
        code/employ/custom/menu/all/AllMenuDriver.cpp
        code/employ/custom/menu/all/AllMenuDriver.h
        code/employ/custom/menu/fired/FiredMenu.cpp
        code/employ/custom/menu/fired/FiredMenu.h
        code/employ/custom/menu/fired/FiredMenuDriver.cpp
        code/employ/custom/menu/fired/FiredMenuDriver.h
        code/employ/custom/menu/hiring/HiringMenu.cpp
        code/employ/custom/menu/hiring/HiringMenu.h
        code/employ/custom/menu/hiring/HiringMenuDriver.cpp
        code/employ/custom/menu/hiring/HiringMenuDriver.h

        code/employ/custom/menu/salary/SalaryMenu.cpp
        code/employ/custom/menu/salary/SalaryMenu.h
        code/employ/custom/menu/demote/DemoteMenu.cpp
        code/employ/custom/menu/demote/DemoteMenu.h
        code/employ/custom/menu/demote/DemoteMenuDriver.cpp
        code/employ/custom/menu/demote/DemoteMenuDriver.h
        code/employ/custom/menu/promote/PromoteMenu.cpp
        code/employ/custom/menu/promote/PromoteMenu.h
        code/employ/custom/menu/promote/PromoteMenuDriver.cpp
        code/employ/custom/menu/promote/PromoteMenuDriver.h
        code/employ/custom/menu/hire/HireMenu.cpp
        code/employ/custom/menu/hire/HireMenu.h
        code/employ/custom/menu/hire/HireMenuDriver.cpp
        code/employ/custom/menu/hire/HireMenuDriver.h
        code/employ/custom/menu/update/UpdateMenu.cpp
        code/employ/custom/menu/update/UpdateMenu.h
        code/employ/custom/menu/fire/FireMenu.cpp
        code/employ/custom/menu/fire/FireMenu.h
        code/employ/custom/menu/fire/FireMenuDriver.cpp
        code/employ/custom/menu/fire/FireMenuDriver.h)
