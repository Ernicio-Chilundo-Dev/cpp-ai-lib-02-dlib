cmake_minimum_required(VERSION 3.0)
project(dlib_face_detector)

find_package(dlib REQUIRED)

add_executable(etapa02 etapa02.cpp)
target_link_libraries(etapa02 dlib::dlib)