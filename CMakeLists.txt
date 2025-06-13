cmake_minimum_required(VERSION 3.0)
project(dlib_face_detector)

find_package(dlib REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main dlib::dlib)