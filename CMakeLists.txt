cmake_minimum_required(VERSION 3.1.0)

project(testproject LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

set(project_sources	
    src/main.cpp
)
set(PROJECT_NAME testproject)

add_subdirectory(docs)
add_subdirectory(src)

add_executable(${PROJECT_NAME} ${project_sources})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
