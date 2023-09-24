cmake_minimum_required(VERSION 3.26)
project(KanbanSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        KanbanSystem main.cpp)

add_subdirectory(src)

include_directories(/home/marcos/CodeBlocksProjects/KanbanSystem/include)
