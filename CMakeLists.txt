cmake_minimum_required(VERSION 3.0.0)
project(lite-http-server VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(Poco REQUIRED Net Util)
add_library(lite-http-server lite-http-server.cpp)
target_link_libraries(lite-http-server Poco::Net Poco::Util)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
