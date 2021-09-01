cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp
        main.cpp
        #        table
        code/employ/custom/table/BaseTable.h
        code/employ/custom/table/EmployeeTable.h
        code/employ/custom/table/AmountTable.h
        code/employ/custom/table/EmployeeTable.cpp
        code/employ/custom/table/AmountTable.cpp
        #        test table
        code/employ/custom/table/TestTable.h
        code/employ/custom/table/TestTable.cpp
        #        model
        code/employ/custom/model/Model.h
        code/employ/custom/model/EmployeeModel.h
        code/employ/custom/model/AmountModel.h
        #        test model
        code/employ/custom/model/TestModel.cpp
        code/employ/custom/model/TestModel.h
        #        #        controller
        #        code/employ/custom/controller/BaseController.h
        #        code/employ/custom/controller/EmployeeController.h
        #        code/employ/custom/controller/AmountController.h
        #        #        test controller
        #        code/employ/custom/controller/TestController.cpp
        #        code/employ/custom/controller/TestController.h
        #        utils time
        code/employ/custom/utils/TimeUtils.h
        #        test utils time
        code/employ/custom/utils/TestUtils.cpp
        code/employ/custom/utils/TestUtils.h
        #        ui
        code/employ/custom/ui/MenuUI.h
        code/employ/custom/ui/EmployeeUI.h
        #        test ui
        code/employ/custom/ui/TestUI.cpp
        code/employ/custom/ui/TestUI.h
        #        entry
        code/employ/custom/Entry.cpp
        code/employ/custom/Entry.h
        #        entry
        code/employ/custom/driver/BaseDriver.h
        code/employ/custom/driver/StreamDriver.h
        code/employ/custom/driver/StreamDriver.cpp
        )
