cmake_minimum_required(VERSION 3.16)
project(OrderBookDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(OrderBookDemo main.cpp)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

target_link_libraries(OrderBookDemo src)
target_link_libraries(OrderBookDemo test)