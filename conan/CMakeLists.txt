cmake_minimum_required(VERSION 3.8)
project(test_package LANGUAGES CXX)

find_package(mongocxx REQUIRED CONFIG)

add_executable(${PROJECT_NAME} test_package.cpp)

if(TARGET mongo::mongocxx_shared)
  target_link_libraries(${PROJECT_NAME} PRIVATE mongo::mongocxx_shared mongo::bsoncxx_shared)
else()
  target_link_libraries(${PROJECT_NAME} PRIVATE mongo::mongocxx_static mongo::bsoncxx_static)
endif()
