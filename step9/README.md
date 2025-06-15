cmake_minimum_required(VERSION 3.0)
project(dlib_face_recognition)

find_package(dlib REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(step9 step9.cpp)
target_link_libraries(step9 dlib::dlib ${OpenCV_LIBS})
