cmake_minimum_required(VERSION 3.0)
project(step12)

# Find required packages
find_package(OpenCV REQUIRED)
find_package(dlib REQUIRED)

# Add the executable
add_executable(step12 step12.cpp)

# Link with Dlib and OpenCV
target_link_libraries(step12 dlib::dlib ${OpenCV_LIBS})

# Optional: Set C++ standard
set_property(TARGET step12 PROPERTY CXX_STANDARD 17)
