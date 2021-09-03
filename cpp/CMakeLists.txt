cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp
        main.cpp


        #        #        EmployeeModel impl
        #        code/employ/custom/model/employee/EmployeeModel.cpp
        #        code/employ/custom/model/employee/EmployeeModel.h
        #        #        employeeModel test
        #        code/employ/custom/model/employee/EmployeeModelTest.cpp
        #        code/employ/custom/model/employee/EmployeeModelTest.h
        #
        #        #        AppCustom impl
        #        code/employ/custom/app/AppCustom.cpp
        #        code/employ/custom/app/AppCustom.h
        #
        #        #        BaseUI impl
        #        code/employ/custom/ui/base/BaseUI.h
        #        #        QuitUI impl
        #        code/employ/custom/ui/quit/QuitUI.cpp
        #        code/employ/custom/ui/quit/QuitUI.h
        #        #        QuitUITest test
        #        code/employ/custom/ui/quit/QuitUITest.cpp
        #        code/employ/custom/ui/quit/QuitUITest.h
        #        #        EmployeeUI impl
        #        code/employ/custom/ui/employee/EmployeeUI.cpp
        #        code/employ/custom/ui/employee/EmployeeUI.h
        #        #        EmployeeUITest test
        #        code/employ/custom/ui/employee/EmployeeUITest.cpp
        #        code/employ/custom/ui/employee/EmployeeUITest.h
        #        #        AllUI impl
        #        code/employ/custom/ui/all/AllUI.cpp
        #        code/employ/custom/ui/all/AllUI.h
        #
        #        #        AmountController impl
        #        code/employ/custom/controller/amount/AmountController.h
        #        code/employ/custom/controller/amount/AmountController.cpp
        #        #        EmployeeController impl
        #        code/employ/custom/controller/employee/EmployeeController.h
        #        code/employ/custom/controller/employee/EmployeeController.cpp
        #
        #        code/employ/custom/controller/amount/AmountControllerTest.cpp
        #        code/employ/custom/controller/amount/AmountControllerTest.h
        #        code/employ/custom/controller/employee/EmployeeControllerTest.cpp
        #        code/employ/custom/controller/employee/EmployeeControllerTest.h

        code/utils/driver.h
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

        code/employ/custom/driver.h
        code/employ/custom/table/driver.h
        code/employ/custom/table/base/BaseTable.cpp
        code/employ/custom/table/base/BaseTable.h
        code/employ/custom/table/base/BaseTableDriver.cpp
        code/employ/custom/table/base/BaseTableDriver.h
        code/employ/custom/table/TableDisplay.cpp
        code/employ/custom/table/TableDisplay.h
        code/employ/custom/table/amount/AmountTable.cpp
        code/employ/custom/table/amount/AmountTable.h
        code/employ/custom/table/amount/AmountTableDriver.cpp
        code/employ/custom/table/amount/AmountTableDriver.h
        code/employ/custom/table/employee/EmployeeTable.h
        code/employ/custom/table/employee/EmployeeTable.cpp
        code/employ/custom/table/employee/EmployeeTableDriver.cpp
        code/employ/custom/table/employee/EmployeeTableDriver.h
        code/employ/custom/model/driver.h
        code/employ/custom/model/amount/AmountModel.h
        code/employ/custom/model/amount/AmountModel.cpp
        code/employ/custom/model/amount/AmountModelTest.h
        code/employ/custom/model/amount/AmountModelTest.cpp


        code/employ/custom/model/ModelDisplay.cpp code/employ/custom/model/ModelDisplay.h)
