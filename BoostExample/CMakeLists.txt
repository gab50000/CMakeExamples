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
 PRIVATE
 parse_commandline.cpp
 config.cpp
)
add_executable(configtest)
target_link_libraries(configtest LINK_PUBLIC ${Boost_LIBRARIES})
target_sources(configtest
 PRIVATE
 parse_configfile.cpp
 config.cpp
)

# CPack
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include(CPack)