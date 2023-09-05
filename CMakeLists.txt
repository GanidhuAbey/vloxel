# CMakeList.txt : CMake project for vloxel, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(PythonInterp 3.9.10 REQUIRED)

project ("vloxel")

# add libraries
find_package(Vulkan)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/ext/glfw")

file(GLOB SOURCES "core/*.cpp" "editor/*.cpp")
add_library(VLOXEL_INTERNAL ${SOURCES})

# Add source to this project's executable.
add_executable (vloxel "vloxel.cpp" "vloxel.h" ${SOURCES})

# include directories
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/ext/glfw/include")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories("${Vulkan_INCLUDE_DIR}")

# link libraries
target_link_libraries(vloxel PUBLIC VLOXEL_INTERNAL
                                     ${Vulkan_LIBRARIES}
                                     glfw)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET vloxel PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
