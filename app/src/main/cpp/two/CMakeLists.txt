cmake_minimum_required(VERSION 3.4.1)


message(STATUS "CMAKE_CURRENT_SOURCE_DIR->)" ${PROJECT_SOURCE_DIR})
set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../distribution)


add_library(lib_one SHARED IMPORTED)
#设置so路径
set_target_properties(lib_one PROPERTIES IMPORTED_LOCATION
    ${PROJECT_SOURCE_DIR}/../../jniLibs/${ANDROID_ABI}/libone.so)

add_library(two SHARED two.cpp
                        Hey.cpp
                        fruit.cpp)
#加入include目录
target_include_directories(two PRIVATE ${distribution_DIR}/one/include)

target_link_libraries(two ${log-lib} lib_one)