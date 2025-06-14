cmake_minimum_required(VERSION 3.0)
project(dlib_realtime_detection)

find_package(dlib REQUIRED)

find_package(OpenCV REQUIRED)

add_executable(etapa06 etapa06.cpp)
target_link_libraries(etapa06 ${OpenCV_LIBS} dlib::dlib)
include_directories(${OpenCV_INCLUDE_DIRS})