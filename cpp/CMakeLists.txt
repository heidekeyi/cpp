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
        code/employ/custom/menu/employee/display/base/DisplayBaseEmployeeMenu.cpp
        code/employ/custom/menu/employee/display/base/DisplayBaseEmployeeMenu.h
        code/employ/custom/menu/employee/display/all/DisplayAllEmployeeMenu.cpp
        code/employ/custom/menu/employee/display/all/DisplayAllEmployeeMenu.h
        code/employ/custom/menu/employee/display/all/DisplayAllEmployeeMenuDriver.cpp
        code/employ/custom/menu/employee/display/all/DisplayAllEmployeeMenuDriver.h
        code/employ/custom/menu/employee/display/fire/DisplayFireEmployeeMenu.cpp
        code/employ/custom/menu/employee/display/fire/DisplayFireEmployeeMenu.h
        code/employ/custom/menu/employee/display/fire/DisplayFireEmployeeMenuDriver.cpp
        code/employ/custom/menu/employee/display/fire/DisplayFireEmployeeMenuDriver.h
        code/employ/custom/menu/employee/display/hire/DisplayHireEmployeeMenu.cpp
        code/employ/custom/menu/employee/display/hire/DisplayHireEmployeeMenu.h
        code/employ/custom/menu/employee/display/hire/DisplayHireEmployeeMenuDriver.cpp
        code/employ/custom/menu/employee/display/hire/DisplayHireEmployeeMenuDriver.h

        code/employ/custom/menu/salary/base/BaseSalaryMenu.cpp
        code/employ/custom/menu/salary/base/BaseSalaryMenu.h
        code/employ/custom/menu/salary/demote/DemoteSalaryMenu.cpp
        code/employ/custom/menu/salary/demote/DemoteSalaryMenu.h
        code/employ/custom/menu/salary/demote/DemoteSalaryMenuDriver.cpp
        code/employ/custom/menu/salary/demote/DemoteSalaryMenuDriver.h
        code/employ/custom/menu/salary/promote/PromoteSalaryMenu.cpp
        code/employ/custom/menu/salary/promote/PromoteSalaryMenu.h
        code/employ/custom/menu/salary/promote/PromoteSalaryMenuDriver.cpp
        code/employ/custom/menu/salary/promote/PromoteSalaryMenuDriver.h
        code/employ/custom/menu/employee/hire/HireEmployeeMenu.cpp
        code/employ/custom/menu/employee/hire/HireEmployeeMenu.h
        code/employ/custom/menu/employee/hire/HireEmployeeMenuDriver.cpp
        code/employ/custom/menu/employee/hire/HireEmployeeMenuDriver.h
        code/employ/custom/menu/employee/update/base/UpdateBaseEmployeeMenu.cpp
        code/employ/custom/menu/employee/update/base/UpdateBaseEmployeeMenu.h
        code/employ/custom/menu/employee/fire/FireEmployeeMenu.cpp
        code/employ/custom/menu/employee/fire/FireEmployeeMenu.h)
