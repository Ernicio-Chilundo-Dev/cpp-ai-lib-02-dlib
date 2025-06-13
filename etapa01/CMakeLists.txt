cmake_minimum_required(VERSION 3.0)
project(dlib_face_detector)

find_package(dlib REQUIRED)

add_executable(etapa01 etapa01.cpp)
target_link_libraries(etapa01 dlib::dlib)