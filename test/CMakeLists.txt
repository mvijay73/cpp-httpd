cmake_minimum_required(VERSION 3.0.0)
project(test-app VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(Poco REQUIRED Net Util)
add_executable(test-app test-app.cpp)
target_link_libraries(test-app -llite-httpd Poco::Net Poco::Util)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
