cmake_minimum_required(VERSION 3.4.1)


message(STATUS "CMAKE_CURRENT_SOURCE_DIR->)" ${PROJECT_SOURCE_DIR})
#set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../distribution)
#set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../distribution)


add_library(lib_one SHARED IMPORTED)
#设置so路径
set_target_properties(lib_one PROPERTIES IMPORTED_LOCATION
    ${PROJECT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libone.so)

add_library(three SHARED feet.cpp
                        Hoho.cpp
                        )
#加入include目录
target_include_directories(three PRIVATE ${PROJECT_SOURCE_DIR}/../distribution/one/include)

target_link_libraries(three ${log-lib} lib_one)