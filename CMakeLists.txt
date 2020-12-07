cmake_minimum_required(VERSION 3.5)

project(thuvientinh LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -fpie")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -pie")

add_library(${PROJECT_NAME} STATIC phepcong.cpp)
set_target_properties(${PROJECT_NAME}
    PROPERTIES PUBLIC_HEADER phepcong.h)

install(TARGETS ${PROJECT_NAME}
        PERMISSIONS OWNER_EXECUTE OWNER_READ
        DESTINATION /home/pham/cpp/thuvienchung/${PROJECT_NAME})
