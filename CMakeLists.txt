cmake_minimum_required(VERSION 3.19.0)

project("String Convert")

add_subdirectory(extern)

# library
add_library(string-convert STATIC
    include/mam/string-convert/string-convert.h
    source/string-convert.cpp
)

target_include_directories(string-convert
    PUBLIC
        include
    PRIVATE
        source
)

target_compile_features(string-convert 
    PRIVATE 
        cxx_std_17
)

# executable
add_executable(string-convert-app
    source/main.cpp
)

target_link_libraries(string-convert-app
    PRIVATE
        string-convert
)

target_compile_features(string-convert-app
    PRIVATE 
        cxx_std_17
)
