cmake_minimum_required(VERSION 3.17)
project(
    ConfigTest
    VERSION 0.0.1
)

set(CMAKE_CXX_STANDARD 17)


find_package(Boost 1.69 COMPONENTS program_options REQUIRED)
add_executable(cmdtest)
target_link_libraries(cmdtest LINK_PUBLIC ${Boost_LIBRARIES})
target_sources(cmdtest
 PUBLIC
 ${CMAKE_CURRENT_SOURCE_DIR}/parse_commandline.cpp
 ${CMAKE_CURRENT_SOURCE_DIR}/config.cpp
)
add_executable(configtest)
target_link_libraries(configtest LINK_PUBLIC ${Boost_LIBRARIES})
target_sources(configtest
 PUBLIC
 ${CMAKE_CURRENT_SOURCE_DIR}/parse_configfile.cpp
 ${CMAKE_CURRENT_SOURCE_DIR}/config.cpp
)

# CPack
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include(CPack)