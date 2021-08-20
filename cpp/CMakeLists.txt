cmake_minimum_required(VERSION 3.16)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp
        main.cpp
        code/Point.cpp code/Point.h
        code/Handle.cpp code/Handle.h
        code/UPoint.cpp code/UPoint.h
        code/shape/Shape.h
        code/shape/Rect.cpp code/shape/Rect.h

        code/shape/Line.cpp code/shape/Line.h code/shape/Proxy.cpp code/shape/Proxy.h code/shape/test.cpp code/shape/test.h)
