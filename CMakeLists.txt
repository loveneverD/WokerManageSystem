cmake_minimum_required(VERSION 3.27)
project(WokerManageSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(WokerManageSystem
        workerManager.cpp
        workerManager.h
        worker.h
        employee.h
        employee.cpp
        manager.h
        manager.cpp
        boss.h
        boss.cpp
        main.cpp)
