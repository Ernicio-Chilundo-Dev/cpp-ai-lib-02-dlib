cmake_minimum_required(VERSION 3.0)
project(dlib_face_recognition)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

find_package(OpenCV REQUIRED)

add_executable(step9 step9.cpp)
target_link_libraries(step9 dlib ${OpenCV_LIBS})
