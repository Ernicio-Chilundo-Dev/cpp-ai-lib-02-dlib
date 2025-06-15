cmake_minimum_required(VERSION 3)
project(dlib_face_alignment)

find_package(dlib REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(step08 step8)
target_link_libraries(step08 dlib::dlib ${OpenCV_LIBS})