cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp
        main.cpp
        #        utils test
        code/utils/test/TestUtils.cpp
        code/utils/test/TestUtils.h

        #        time utils impl
        code/utils/time/TimeUtils.h
        #        time utils test
        code/utils/time/TimeUtilsTest.cpp
        code/utils/time/TimeUtilsTest.h
        #        stream utils impl
        code/utils/stream/StreamUtils.cpp
        code/utils/stream/StreamUtils.h
        #        stream utils test
        code/utils/stream/StreamUtilsTest.cpp
        code/utils/stream/StreamUtilsTest.h
        )