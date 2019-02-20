
cmake_minimum_required(VERSION 3.4.1)



ADD_SUBDIRECTORY(src/main/cpp/three)
ADD_SUBDIRECTORY(src/main/cpp/two)


#这里产生3个so，hello为外部so，one，two是内部so。hello并不会把one,two打进去