cmake_minimum_required(VERSION 3.4.1)


message(STATUS "CMAKE_CURRENT_SOURCE_DIR->)" ${PROJECT_SOURCE_DIR})
set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../distribution)


add_library(lib_one SHARED IMPORTED)
set_target_properties(lib_one PROPERTIES IMPORTED_LOCATION
    ${distribution_DIR}/one/lib/${ANDROID_ABI}/libone.so)



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")




add_library(two SHARED two.cpp
                        Hey.cpp
                        fruit.cpp)

target_include_directories(two PRIVATE ${distribution_DIR}/one/include)

target_link_libraries(two ${log-lib} lib_one)