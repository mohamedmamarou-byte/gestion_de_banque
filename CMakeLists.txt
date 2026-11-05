cmake_minimum_required(VERSION 3.16)
project(GESTION_DE_BANQUE VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(GESTION_DE_BANQUE
    src/main.cpp 
    src/compte.cpp 
    src/menu.cpp 
)

target_include_directories(GESTION_DE_BANQUE PRIVATE include)
target_compile_options(GESTION_DE_BANQUE PRIVATE -Wall -Wextra)
