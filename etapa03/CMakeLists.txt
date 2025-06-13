cmake_minimum_required(VERSION 3.0)
project(dlib_image_filters)

find_package(dlib REQUIRED)

add_executable(etapa03 etapa03.cpp)
target_link_libraries(etapa03 dlib::dlib)