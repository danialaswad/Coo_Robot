cmake_minimum_required(VERSION 3.3)
project(Coo_Robot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Robot.cpp src/Robot.h src/Objet.cpp src/Objet.h src/Plot.cpp src/Plot.h src/EtatRobot.cpp src/EtatRobot.h src/Position.h src/etat/EtatFiger.cpp src/etat/EtatFiger.h src/Position.cpp src/etat/EtatEnRoute.cpp src/etat/EtatEnRoute.h src/etat/EtatAVide.cpp src/etat/EtatAVide.h src/etat/EtatEnCharge.cpp src/etat/EtatEnCharge.h src/etat/EtatAVideFacePlot.cpp src/etat/EtatAVideFacePlot.h src/etat/EtatEnChargeFacePlot.cpp src/etat/EtatEnChargeFacePlot.h)
add_executable(Coo_Robot ${SOURCE_FILES})