cmake_minimum_required(VERSION 3.0)
project(step11)

find_package(OpenCV REQUIRED)
find_package(dlib REQUIRED)

add_executable(step11 step11.cpp)
target_link_libraries(step11 dlib::dlib ${OpenCV_LIBS})
