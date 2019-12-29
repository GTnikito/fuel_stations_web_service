cmake_minimum_required(VERSION 3.15)
project(service)

set(CMAKE_CXX_STANDARD 14)

if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	include_directories(/usr/local/Cellar/cppcms/1.2.1/include)
	link_directories(/usr/local/Cellar/cppcms/1.2.1/lib)
else()
	include_directories(service /usr/local/include)
	link_directories(service /usr/local/lib)
endif()

add_executable(service main.cpp fuel_stations.cpp)

target_link_libraries(service cppcms booster)
