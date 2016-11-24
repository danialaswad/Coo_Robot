#example name of the executable to generate
EXE_NAME=robot

#extra header file pathes (if empty, please add '.')
EXTRA_HEADER_PATH=.

#list of the options that must be passed to the compiler g++(man g++for details)
CXX_FLAGS =-g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11

#shortcut to call the compiler call with the specified options and includes
CXX = g++ $(CXX_FLAGS) -I$(EXTRA_HEADER_PATH) -c

#variable for the linkers (which are here include in the same command line than the compiler
LINK_CXX = g++

robot: Robot.o Position.o Plot.o Objet.o main.o EtatRobot.o RobotObserver.o Observer.o Observable.o EtatFiger.o EtatEnRoute.o EtatEnChargeFacePlot.o EtatEnCharge.o EtatAVideFacePlot.o EtatAVide.o Commande.o
	$(LINK_CXX) Robot.o Position.o Plot.o Objet.o main.o EtatRobot.o RobotObserver.o Observer.o Observable.o EtatFiger.o EtatEnRoute.o EtatEnChargeFacePlot.o EtatEnCharge.o EtatAVideFacePlot.o EtatAVide.o Commande.o -o $(EXE_NAME)

Robot.o: src/Robot.cpp src/Robot.h
	$(CXX)  src/Robot.cpp

Position.o: src/Position.cpp src/Position.h
	$(CXX)  src/Position.cpp

Plot.o: src/Plot.cpp src/Plot.h
	$(CXX)  src/Plot.cpp

Objet.o: src/Objet.cpp src/Objet.h
	$(CXX)  src/Objet.cpp

main.o: src/main.cpp
	$(CXX)  src/main.cpp

EtatRobot.o: src/EtatRobot.cpp src/EtatRobot.h
	$(CXX)  src/EtatRobot.cpp

RobotObserver.o: src/observateur/RobotObserver.cpp src/observateur/RobotObserver.h
	$(CXX)  src/observateur/RobotObserver.cpp

Observer.o: src/observateur/Observer.cpp src/observateur/Observer.h
	$(CXX)  src/observateur/Observer.cpp

Observable.o: src/observateur/Observable.cpp src/observateur/Observable.h
	$(CXX)  src/observateur/Observable.cpp

EtatFiger.o: src/etat/EtatFiger.cpp src/etat/EtatFiger.h
	$(CXX)  src/etat/EtatFiger.cpp

EtatEnRoute.o: src/etat/EtatEnRoute.cpp src/etat/EtatEnRoute.h
	$(CXX)  src/etat/EtatEnRoute.cpp

EtatEnChargeFacePlot.o: src/etat/EtatEnChargeFacePlot.cpp src/etat/EtatEnChargeFacePlot.h
	$(CXX)  src/etat/EtatEnChargeFacePlot.cpp

EtatEnCharge.o: src/etat/EtatEnCharge.cpp src/etat/EtatEnCharge.h
	$(CXX)  src/etat/EtatEnCharge.cpp

EtatAVideFacePlot.o: src/etat/EtatAVideFacePlot.cpp src/etat/EtatAVideFacePlot.h
	$(CXX)  src/etat/EtatAVideFacePlot.cpp

EtatAVide.o: src/etat/EtatAVide.cpp src/etat/EtatAVide.h
	$(CXX)  src/etat/EtatAVide.cpp

Commande.o: src/command/Commande.cpp src/command/Commande.h
	$(CXX)  src/command/Commande.cpp

clean:
	-rm -f *.o
	-rm -f $(EXE_NAME)


