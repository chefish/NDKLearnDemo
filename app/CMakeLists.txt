
cmake_minimum_required(VERSION 3.4.1)

add_library(hello
            SHARED
            src/main/cpp/Hi.cpp)

find_library(log-lib log )
target_link_libraries(hello ${log-lib} )

ADD_SUBDIRECTORY(src/main/cpp/one)
ADD_SUBDIRECTORY(src/main/cpp/two)


这里产生3个so，hello为外部so，one，two是内部so。hello并不会把one,two打进去