cmake_minimum_required(VERSION 3.17)
project(ConfigTest)


find_package(Boost 1.69 COMPONENTS program_options REQUIRED)
add_executable(conftest main.cpp)
target_link_libraries(conftest LINK_PUBLIC ${Boost_LIBRARIES})