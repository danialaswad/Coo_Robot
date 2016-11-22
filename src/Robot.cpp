//
// Created by danial on 15/11/16.
//

#include "Robot.h"

void Robot::avancer(int x, int y) {

    try {
    #ifdef DEBUG
        std::cout << "DEBUG: Robot advancing from " << _position << " to " << Position(x, y) << std::endl;
    #endif
        _etat = _etat->avancer();
        _position.set_x(x);
        _position.set_y(y);
    }catch (const char* e){
        cout << e << endl;
    }
}

void Robot::tourner(string direction) {
    try {
    #ifdef DEBUG
        std::cout << "DEBUG: Robot turning from " << _direction << " to " << direction << std::endl;
    #endif
        _etat = _etat->tourner();
        _direction = direction;
    }catch (const char* e){
        cout << e << endl;
    }
}

void Robot::saisir(Objet objet) {
    try {
#ifdef DEBUG
        std::cout <<"saisir objet"<< std::endl;
#endif
        _etat = _etat->saisir();
        _objet = objet;
    }catch (const char* e){
        cout << e << endl;
    }
}

void Robot::poser() {

}

int Robot::peser() {
    return 0;
}

void Robot::rencontrerPlot(Plot p) {
    try {
#ifdef DEBUG
        std::cout << "rencontrer plot" << std::endl;
#endif
        _etat = _etat->rencontrerPlot();
        _plot = p;
    }catch (const char* e){
        cout << e << endl;
    }
}

int Robot::evaluerPlot() {
    return 0;
}

void Robot::figer() {

}

void Robot::repartir() {

}

void Robot::afficher() {
    std::cout << "Etat : " << *_etat << ", Position : " << _position << ", Direction : " << _direction << std::endl;

}
