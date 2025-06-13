cmake_minimum_required(VERSION 3.0)
project(dlib_face_landmaarks)

find_package(dlib REQUIRED)

add_executable(etapa05 etapa05.cpp)
target_link_libraries(etapa05 dlib::dlib)