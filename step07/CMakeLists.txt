cmake_minimum_required(VERSION 3.0)
project(dlib_landmarks_realtime)

find_package(dlib REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(step07 step07.cpp)
target_link_libraries(step07 dlib::dlib ${OpenCV_LIBS})