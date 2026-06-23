cmake_minimum_required(VERSION 3.22)
project(savant LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

find_package(unofficial-sqlite3 CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)


file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(savant ${SOURCES})

target_link_libraries(savant PRIVATE unofficial::sqlite3::sqlite3 spdlog::spdlog)

enable_testing()
add_subdirectory(tests)