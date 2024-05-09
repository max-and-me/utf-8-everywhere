cmake_minimum_required(VERSION 3.19.0)

project("UTF-8 Everywhere")

add_subdirectory(extern)

# library
add_library(utf-8-everywhere STATIC
    include/utf_8_everywhere/convert.h
    source/convert.cpp
)

target_include_directories(utf-8-everywhere
    PUBLIC
        include
    PRIVATE
        source
)

target_compile_features(utf-8-everywhere 
    PRIVATE 
        cxx_std_17
)

# executable
add_executable(utf-8-everywhere-app
    source/main.cpp
)

target_link_libraries(utf-8-everywhere-app
    PRIVATE
        utf-8-everywhere
)

target_compile_features(utf-8-everywhere-app
    PRIVATE 
        cxx_std_17
)
