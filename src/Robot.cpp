//
// Created by danial on 15/11/16.
//

#include "Robot.h"

void Robot::avancer(int x, int y) {
#ifdef DEBUG
    std::cout << "DEBUG: Robot advancing from " << _position << " to " << Position(x, y) << std::endl;
#endif
    _position.set_x(x);
    _position.set_y(y);
}

void Robot::tourner(string direction) {

}

void Robot::saisir(Objet objet) {

}

void Robot::poser() {

}

int Robot::peser() {
    return 0;
}

void Robot::rencontrerPlot(Plot p) {

}

int Robot::evaluerPlot() {
    return 0;
}

void Robot::figer() {

}

void Robot::repartir() {

}

void Robot::afficher() {
    std::cout << "Etat : " << "N/A" << ", Position : " << _position << std::endl;
}
