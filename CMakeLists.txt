cmake_minimum_required(VERSION 3.22)
project(savant LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Export compile_commands.json so clangd/IntelliSense can resolve includes.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

find_package(unofficial-sqlite3 CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)


set(SOURCES
    src/main.cpp
    src/models/book.cpp
    src/models/patron.cpp
    src/models/transaction.cpp
)

add_executable(savant ${SOURCES})

target_link_libraries(savant PRIVATE unofficial::sqlite3::sqlite3 spdlog::spdlog)

enable_testing()
add_subdirectory(tests)