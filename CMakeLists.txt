cmake_minimum_required(VERSION 3.3)
project(Coo_Robot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Robot.cpp src/Robot.h src/Objet.cpp src/Objet.h src/Plot.cpp src/Plot.h src/etat/EtatRobot.cpp src/etat/EtatRobot.h src/Position.h src/etat/EtatFiger.cpp src/etat/EtatFiger.h src/Position.cpp src/etat/EtatEnRoute.cpp src/etat/EtatEnRoute.h src/etat/EtatAVide.cpp src/etat/EtatAVide.h src/etat/EtatEnCharge.cpp src/etat/EtatEnCharge.h src/etat/EtatAVideFacePlot.cpp src/etat/EtatAVideFacePlot.h src/etat/EtatEnChargeFacePlot.cpp src/etat/EtatEnChargeFacePlot.h src/command/Commande.cpp src/command/Commande.h src/observateur/Observable.cpp src/observateur/Observable.h src/observateur/Observer.cpp src/observateur/Observer.h src/observateur/RobotObserver.cpp src/observateur/RobotObserver.h src/command/Invocateur.cpp src/command/Invocateur.h src/command/CommandeRobot.cpp src/command/CommandeRobot.h src/command/action/Avancer.cpp src/command/action/Avancer.h src/command/action/Tourner.cpp src/command/action/Tourner.h)
add_executable(Coo_Robot ${SOURCE_FILES})

if(CMAKE_BUILD_TYPE MATCHES Debug)
   target_compile_definitions(Coo_Robot PUBLIC DEBUG=1)
endif()