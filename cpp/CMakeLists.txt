cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp
        main.cpp

        code/driver.h

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

        code/employ/custom/table/TableDisplay.cpp
        code/employ/custom/table/TableDisplay.h
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

        code/employ/custom/model/ModelDisplay.cpp
        code/employ/custom/model/ModelDisplay.h
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

        code/employ/custom/app/AppCustom.cpp
        code/employ/custom/app/AppCustom.h


        code/employ/custom/menu/display/MenuDisplay.cpp
        code/employ/custom/menu/display/MenuDisplay.h
        code/employ/custom/menu/base/BaseMenu.h
        code/employ/custom/menu/quit/QuitMenu.cpp
        code/employ/custom/menu/quit/QuitMenu.h
        code/employ/custom/menu/quit/QuitMenuDriver.cpp
        code/employ/custom/menu/quit/QuitMenuDriver.h
        code/employ/custom/menu/display/all/DisplayAllEmployeeMenu.cpp
        code/employ/custom/menu/display/all/DisplayAllEmployeeMenu.h
        code/employ/custom/menu/display/all/DisplayAllEmployeeMenuDriver.cpp
        code/employ/custom/menu/display/all/DisplayAllEmployeeMenuDriver.h
        code/employ/custom/menu/display/hire/DisplayHireEmployeeMenu.cpp
        code/employ/custom/menu/display/hire/DisplayHireEmployeeMenu.h
        code/employ/custom/menu/display/hire/DisplayHireEmployeeMenuDriver.cpp
        code/employ/custom/menu/display/hire/DisplayHireEmployeeMenuDriver.h
        code/employ/custom/menu/display/fire/DisplayFireEmployeeMenu.cpp
        code/employ/custom/menu/display/fire/DisplayFireEmployeeMenu.h
        code/employ/custom/menu/display/fire/DisplayFireEmployeeMenuDriver.cpp
        code/employ/custom/menu/display/fire/DisplayFireEmployeeMenuDriver.h
        )
