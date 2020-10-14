cmake_minimum_required(VERSION 3.17)
project(1_Observer)
include_directories(src)
set(CMAKE_CXX_STANDARD 14)
#add_subdirectory(src)
aux_source_directory(. DIR_SRCS)
#add_library(ObserverLib ${DIR_SRCS})
add_executable(main ${DIR_SRCS} )
#TARGET_LINK_LIBRARIES(main ObserverLib)


