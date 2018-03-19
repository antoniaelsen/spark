# Copyright 2017 Modbot Inc.

project(spark)
cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 14)

find_package( OpenCV REQUIRED )

FILE(GLOB SOURCES src/*.cpp)
add_executable(spark src/main.cpp ${SOURCES})

target_link_libraries(spark ${OpenCV_LIBS})

