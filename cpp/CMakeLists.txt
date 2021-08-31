cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp
        main.cpp
        #        table
        code/employ/custom/table/Table.h
        code/employ/custom/table/EmployeeTable.h
        code/employ/custom/table/EmployConstraintTable.h
        code/employ/custom/table/AmountTable.h
        code/employ/custom/table/StatusTable.h
        #        test table
        code/employ/custom/table/TestTable.cpp
        code/employ/custom/table/TestTable.h

        #        model
        code/employ/custom/model/Model.h
        code/employ/custom/model/StatusModel.h
        code/employ/custom/model/EmployeeModel.h
        code/employ/custom/model/AmountModel.h
        #        test model
        code/employ/custom/model/TestModel.cpp
        code/employ/custom/model/TestModel.h

        #        controller
        code/employ/custom/controller/EmployeeController.h
        code/employ/custom/controller/Controller.h
        code/employ/custom/controller/AmountController.h
        code/employ/custom/controller/StatusController.h
        #        test controller
        code/employ/custom/controller/TestController.cpp
        code/employ/custom/controller/TestController.h)
