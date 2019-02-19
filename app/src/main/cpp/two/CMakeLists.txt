

include_directories(../one)

add_library(two SHARED two.cpp
                        Hey.cpp
                        fruit.cpp)

target_link_libraries(two ${log-lib} )