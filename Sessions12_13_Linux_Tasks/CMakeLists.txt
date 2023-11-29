cmake_minimum_required(VERSION 3.22)
project(HELLOAPP)

set(SRC_FILES
    main.cpp)
    
add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
add_executable(hellobinary ${SRC_FILES})
target_include_directories(hellobinary PUBLIC include/ lib/)

target_link_libraries(hellobinary PUBLIC SayHello_lib)
