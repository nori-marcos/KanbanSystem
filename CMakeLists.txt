cmake_minimum_required(VERSION 3.26)
project(KanbanSystem)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(KanbanSystem
        Coluna.cpp
        Coluna.h
        Email.cpp
        Email.h
        main.cpp
        Teste.h
        Teste.cpp)