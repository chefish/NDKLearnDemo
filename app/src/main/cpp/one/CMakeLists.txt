

add_library(one SHARED one.cpp
                        Hello.cpp)

target_link_libraries(one ${log-lib} )