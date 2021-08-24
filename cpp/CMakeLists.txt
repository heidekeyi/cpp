cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp
        main.cpp
#        proxy
        code/proxy/Shape.h
        code/proxy/Rect.cpp code/proxy/Rect.h
        code/proxy/Line.cpp code/proxy/Line.h
        code/proxy/Proxy.cpp code/proxy/Proxy.h
        code/proxy/test_proxy.cpp code/proxy/test_proxy.h
#        point
        code/reference/Point.cpp code/reference/Point.h
#        third
#        code/reference/third/Handle.cpp code/reference/third/Handle.h
#        code/reference/third/Counter.cpp code/reference/third/Counter.h
#        code/reference/third/test_third.cpp code/reference/third/test_third.h
#        direct
        code/reference/test_reference.cpp code/reference/test_reference.h
        code/reference/direct/Handle.cpp code/reference/direct/Handle.h
        code/reference/direct/test_direct.cpp code/reference/direct/test_direct.h
#        separate

        code/reference/separate/Count.cpp code/reference/separate/Count.h code/reference/separate/Handle.cpp code/reference/separate/Handle.h)
