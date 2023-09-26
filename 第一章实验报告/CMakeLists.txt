cmake_minimum_required(VERSION 3.26)
project(OOP_Homework_EX1)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(OOP_Homework_EX1
        include/animal.h
        include/appliance.h
        include/elephant.h
        include/furniture.h
        include/refrigerator.h
        src/elephantIntoRefrigerator.cpp)

