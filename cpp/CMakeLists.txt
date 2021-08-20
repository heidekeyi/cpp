cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp
        main.cpp
        code/Point.cpp code/Point.h
        code/Handle.cpp code/Handle.h
        code/UPoint.cpp code/UPoint.h
        code/proxy/Shape.h
        code/proxy/Rect.cpp code/proxy/Rect.h
        code/proxy/Line.cpp code/proxy/Line.h
        code/proxy/Proxy.cpp code/proxy/Proxy.h
        code/proxy/test.cpp code/proxy/test.h

        )
