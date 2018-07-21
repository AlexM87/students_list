project(Projekt)
cmake_minimum_required(VERSION 3.10)
aux_source_directory(. SRC_List) 
add_executable(${PROJECT_NAME} ${SRC_List})
