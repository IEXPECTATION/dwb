cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(dwb LANGUAGES CXX C HOMEPAGE_URL https://github.com/iexpectation/dwb)

add_subdirectory(vendors)

include_directories(BEFORE ./src)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE src/circle.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC glad)
target_link_libraries(${PROJECT_NAME} PUBLIC glfw)
