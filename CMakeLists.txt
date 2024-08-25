cmake_minimum_required(VERSION 3.5)

project(container_project)

add_executable(container src/main.cpp src/s_container.cpp src/l_container.cpp)

set_target_properties(container 
PROPERTIES 
    CXX_STANDARD 17 
    CXX_STANDARD_REQUIRED ON)
