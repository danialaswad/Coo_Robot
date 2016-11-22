//
// Created by danial on 15/11/16.
//

#include "EtatRobot.h"

EtatRobot* EtatRobot::instanceUnique = new EtatRobot();

EtatRobot *EtatRobot::instance() {
    return instanceUnique;
}

EtatRobot *EtatRobot::avancer(int x, int y) {
    return nullptr;
}

EtatRobot *EtatRobot::touner(std::string new_diection) {
    return nullptr;
}

EtatRobot *EtatRobot::saisir(Objet o) {
    return nullptr;
}

EtatRobot *EtatRobot::poser() {
    return nullptr;
}

EtatRobot *EtatRobot::peser() {
    return nullptr;
}

EtatRobot *EtatRobot::rencontrerPlot(Plot p) {
    return nullptr;
}

EtatRobot *EtatRobot::evaluerPlot() {
    return nullptr;
}

EtatRobot *EtatRobot::figer() {
    return nullptr;
}

EtatRobot *EtatRobot::repartir() {
    return nullptr;
}

EtatRobot *EtatRobot::afficher() {
    return nullptr;
}
