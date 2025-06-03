cmake_minimum_required(VERSION 3.10)
project(Listing_3_4 C)

set(CMAKE_C_STANDARD 11)

# Для Windows (путь может отличаться)
include_directories("C:/raylib/raylib/src")
link_directories("C:/raylib/lib")

add_executable(Listing_3_4 print2.c)

# Связывание библиотек
target_link_libraries(Listing_3_4 raylib)

# Для Windows также требуется связь с системными библиотеками
if(WIN32)
    target_link_libraries(Listing_3_4 opengl32 gdi32 winmm)
endif()