CMAKE_MINIMUM_REQUIRED(VERSION 3.16.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(devinproject)

add_subdirectory(saying)

add_executable(devinbin main.cpp)

target_link_libraries(devinbin devinsaying)

target_include_directories(devinbin PUBLIC
  "${PROJECT_SOURCE_DIR}/saying")
