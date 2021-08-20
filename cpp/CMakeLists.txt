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
#        handle
        code/handle/Point.cpp code/handle/Point.h
        code/handle/Handle.cpp code/handle/Handle.h
        code/handle/Counter.cpp code/handle/Counter.h
        code/handle/test_handle.cpp code/handle/test_handle.h)
