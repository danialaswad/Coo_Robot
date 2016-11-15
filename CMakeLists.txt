cmake_minimum_required(VERSION 3.3)
project(Coo_Robot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Robot.cpp src/Robot.h src/Objet.cpp src/Objet.h src/Plot.cpp src/Plot.h src/EtatRobot.cpp src/EtatRobot.h src/Position.h)
add_executable(Coo_Robot ${SOURCE_FILES})