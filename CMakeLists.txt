cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(oxmdbkv
    VERSION 1.0.0
    LANGUAGES CXX
    HOMEPAGE_URL "https://github.com/blitzederich/oxm-db-key-value"
)

set(CMAKE_CXX_STANDARD 20)
set(OXM_PUBLIC_HEADERS_DIR ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(extern)
add_subdirectory(test)
