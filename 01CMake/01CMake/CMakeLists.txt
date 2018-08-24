# CMakeList.txt : CMake project for 01CMake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_definitions(-DHELLO=\"WORLD\")
add_definitions(-DCONFIG=\"${CONFIG}\")
add_executable (My01CMake "01CMake.cpp" "01CMake.h")

# TODO: Add tests and install targets if needed.
