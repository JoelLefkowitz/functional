cmake_minimum_required(VERSION 3.15)
project(test_package LANGUAGES CXX)

add_executable(test_package test.cpp)

find_package(functional)

target_link_libraries(test_package functional::functional)
