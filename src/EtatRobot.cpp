//
// Created by danial on 15/11/16.
//

#include "EtatRobot.h"

EtatRobot* EtatRobot::instanceUnique = new EtatRobot();

EtatRobot *EtatRobot::instance() {
    return instanceUnique;
}

EtatRobot *EtatRobot::avancer(){
    throw "Action interdit";
}

EtatRobot *EtatRobot::touner() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::saisir() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::poser() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::peser() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::rencontrerPlot() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::evaluerPlot() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::figer() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::repartir() {
    throw "Action interdit";
    //return nullptr;
}

EtatRobot *EtatRobot::afficher() {
    throw "Action interdit";
    //return nullptr;
}

std::ostream &operator<<(std::ostream &os, const EtatRobot &robot) {
    os << typeid(robot).name();
    return os;
}
