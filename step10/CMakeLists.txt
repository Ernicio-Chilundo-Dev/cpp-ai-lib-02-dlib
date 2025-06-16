cmake_minimum_required(VERSION 3.0)
project(step10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(dlib REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(step10 step10.cpp)

target_link_libraries(step10 dlib::dlib ${OpenCV_LIBS})
