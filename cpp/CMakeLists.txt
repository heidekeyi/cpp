cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp
        main.cpp

        #        TestUtils test
        code/utils/test/TestUtils.cpp
        code/utils/test/TestUtils.h

        #        TimeUtils impl
        code/utils/time/TimeUtils.h
        #        TimeUtilsTest test
        code/utils/time/TimeUtilsTest.cpp
        code/utils/time/TimeUtilsTest.h
        #        StreamUtils impl
        code/utils/stream/StreamUtils.cpp
        code/utils/stream/StreamUtils.h
        #        StreamUtilsTest test
        code/utils/stream/StreamUtilsTest.cpp
        code/utils/stream/StreamUtilsTest.h


        #        TestCustom test
        code/employ/custom/test/TestCustom.cpp
        code/employ/custom/test/TestCustom.h

        #        TestTable test
        code/employ/custom/table/test/TestTable.cpp
        code/employ/custom/table/test/TestTable.h

        #        BaseTable impl
        code/employ/custom/table/base/BaseTable.h
        #        BaseTableTest test
        code/employ/custom/table/base/BaseTableTest.cpp
        code/employ/custom/table/base/BaseTableTest.h
        #        AmountTable impl
        code/employ/custom/table/amount/AmountTable.h
        code/employ/custom/table/amount/AmountTable.cpp
        #        AmountTableTest test
        code/employ/custom/table/amount/AmountTableTest.h
        code/employ/custom/table/amount/AmountTableTest.cpp
        #        EmployeeTable impl
        code/employ/custom/table/employee/EmployeeTable.h
        code/employ/custom/table/employee/EmployeeTable.cpp
        #        EmployeeTableTest test
        code/employ/custom/table/employee/EmployeeTableTest.cpp
        code/employ/custom/table/employee/EmployeeTableTest.h

        #        TestModel test
        code/employ/custom/model/test/TestModel.cpp
        code/employ/custom/model/test/TestModel.h
        #        AmountModel impl
        code/employ/custom/model/amount/AmountModel.h
        code/employ/custom/model/amount/AmountModel.cpp
        #        AmountModelTest Test
        code/employ/custom/model/amount/AmountModelTest.h
        code/employ/custom/model/amount/AmountModelTest.cpp
        #        EmployeeModel impl
        code/employ/custom/model/employee/EmployeeModel.cpp
        code/employ/custom/model/employee/EmployeeModel.h
        #        employeeModel test
        code/employ/custom/model/employee/EmployeeModelTest.cpp
        code/employ/custom/model/employee/EmployeeModelTest.h

        #        AppCustom impl
        code/employ/custom/app/AppCustom.cpp
        code/employ/custom/app/AppCustom.h

        #        TestUI test
        code/employ/custom/ui/test/TestUI.cpp
        code/employ/custom/ui/test/TestUI.h
        #        BaseUI impl
        code/employ/custom/ui/base/BaseUI.h
        #        QuitUI impl
        code/employ/custom/ui/quit/QuitUI.cpp
        code/employ/custom/ui/quit/QuitUI.h
        #        QuitUITest test
        code/employ/custom/ui/quit/QuitUITest.cpp
        code/employ/custom/ui/quit/QuitUITest.h
        #        EmployeeUI impl
        code/employ/custom/ui/employee/EmployeeUI.cpp
        code/employ/custom/ui/employee/EmployeeUI.h
        #        EmployeeUITest test
        code/employ/custom/ui/employee/EmployeeUITest.cpp
        code/employ/custom/ui/employee/EmployeeUITest.h
        #        AllUI impl
        code/employ/custom/ui/all/AllUI.cpp
        code/employ/custom/ui/all/AllUI.h
        #        TestController test
        code/employ/custom/controller/test/TestController.cpp
        code/employ/custom/controller/test/TestController.h
        #        AmountController impl
        code/employ/custom/controller/amount/AmountController.h
        code/employ/custom/controller/amount/AmountController.cpp
        #        EmployeeController impl
        code/employ/custom/controller/employee/EmployeeController.h
        code/employ/custom/controller/employee/EmployeeController.cpp

        code/employ/custom/controller/amount/AmountControllerTest.cpp
        code/employ/custom/controller/amount/AmountControllerTest.h
        code/employ/custom/controller/employee/EmployeeControllerTest.cpp
        code/employ/custom/controller/employee/EmployeeControllerTest.h
        )
