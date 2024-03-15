cmake_minimum_required(VERSION 3.28)
project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "Hello World app using cpp20")

set(CMAKE_CXX_STANDARD 20)  
set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(PROJECT_NAME "HelloApp")


add_compile_options(-fmodules)

add_executable(HelloApp)
target_sources(HelloApp PUBLIC 
        FILE_SET test TYPE CXX_MODULES FILES
        a.ixx
        b.ixx
)
target_sources(HelloApp PUBLIC main.cpp)

