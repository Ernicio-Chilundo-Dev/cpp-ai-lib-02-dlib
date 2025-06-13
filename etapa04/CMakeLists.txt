cmake_minimum_required(VERSION 3.0)
project(dlib_face_detection)
    
find_package(dlib REQUIRED)

add_executable(etapa04 etapa04.cpp)
target_link_libraries(etapa04 dlib::dlib)