cmake_minimum_required(VERSION 3.15)
project(service)

include_directories(/usr/local/Cellar/cppcms/1.2.1/include)
link_directories(/usr/local/Cellar/cppcms/1.2.1/lib)

set(CMAKE_CXX_STANDARD 14)

add_executable(service main.cpp
						fuel_stations.cpp)

target_link_libraries(service cppcms booster)
