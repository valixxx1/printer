cmake_minimum_required(VERSION 2.7)
project(printer)
include_directories("include")
add_executable(printer src/printer.c)
if (UNIX)
	target_link_libraries(printer m)
endif (UNIX)
