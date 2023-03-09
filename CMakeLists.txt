cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(cmake
    VERSION         0.0.1
    DESCRIPTION
    HOMEPAGE_URL    "https://github.com/UHRF1-interruption/home-publication-manage"
    LANGUAGES       C CXX
)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(BuildInfo)

add_subdirectory(src)
