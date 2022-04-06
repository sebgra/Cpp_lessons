cmake_minimum_required(VERSION 2.6)
project(Chapter_1)

set(SOURCE_FILES
		${PROJECT_SOURCE_DIR}/Hello.cpp
		
		)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})