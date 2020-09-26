cmake_minimum_required(VERSION 3.17)
project(
    ConfigTest
    VERSION 0.0.1
)


find_package(Boost 1.69 COMPONENTS program_options REQUIRED)
add_executable(conftest ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(conftest LINK_PUBLIC ${Boost_LIBRARIES})

# CPack
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include(CPack)