//
// Created by danial on 15/11/16.
//

#include "Robot.h"

void Robot::avancer(int x, int y) {

    try {
    #ifdef DEBUG
        std::cout << "DEBUG: Robot advancing from " << _position << " to " << Position(x, y) << std::endl;
    #endif
        _etat->avancer();
        _position.set_x(x);
        _position.set_y(y);
    }catch (const char* e){
        cout << e << endl;
    }
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
    std::cout << "Etat : " << _etat << ", Position : " << _position << std::endl;
}
