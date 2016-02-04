cmake_minimum_required(VERSION 3.3)
project(practice)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory("dynamic_grid")
add_subdirectory("string_reversal")
add_subdirectory("phone_number_words")
add_subdirectory("remove_linked_list_dups")
add_subdirectory("linked_list_misc")
add_subdirectory("graphs")

