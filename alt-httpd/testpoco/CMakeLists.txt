cmake_minimum_required(VERSION 3.0.0)
project(test-poco VERSION 0.1.0)

include(CTest)
enable_testing()
find_package(Poco REQUIRED Net Util Foundation)
add_executable(test-poco main.cpp)
target_link_libraries(test-poco -lalt-httpd Poco::Net Poco::Util Poco::Foundation)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
