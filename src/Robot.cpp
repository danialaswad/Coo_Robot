//
// Created by danial on 15/11/16.
//

#include "Robot.h"

void Robot::avancer(Position p) {

    try {
    #ifdef DEBUG
        std::cout << "DEBUG: Robot advancing from " << _position << " to " << p << std::endl;
    #endif
        _etat = _etat->avancer();
        cout << "J'avance en x : " << p.get_x() << " y : " << p.get_y() << endl;
        _position=p;
        notifyAll();
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
        notifyAll();
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
        notifyAll();
    }catch (const char* e){
        cout << e << endl;
    }
}

void Robot::poser() {
    try {
#ifdef DEBUG
        std::cout << "poser objet" << std::endl;
#endif
        _etat = _etat->poser();
        _objet = NULL;
        notifyAll();
    }catch (const char* e){
        cout << e << endl;
    }
}

int Robot::peser() {
    try {
#ifdef DEBUG
        std::cout << "peser" << std::endl;
#endif
        _etat = _etat->peser();
        notifyAll();
        return _objet.get_poid();
    }catch (const char* e){
        cout << e << endl;
    }
}

void Robot::rencontrerPlot(Plot p) {
    try {
#ifdef DEBUG
        std::cout << "rencontrer plot" << std::endl;
#endif
        _etat = _etat->rencontrerPlot();
        _plot = p;
        notifyAll();
    }catch (const char* e){
        cout << e << endl;
    }
}

int Robot::evaluerPlot() {
    try {
#ifdef DEBUG
        std::cout << "evaluer plot" << std::endl;
#endif
        _etat = _etat->evaluerPlot();
        notifyAll();

        return _plot.getHauteur();
    }catch (const char* e){
        cout << e << endl;
    }
}

void Robot::figer() {

    try {
#ifdef DEBUG
        std::cout << "figer" << std::endl;
#endif
        _etat = _etat->figer();
        notifyAll();
    }catch (const char* e){
        cout << e << endl;
    }

}

void Robot::repartir() {
    try {
#ifdef DEBUG
        std::cout << "repartir" << std::endl;
#endif
        _etat = _etat->repartir();
        notifyAll();
    }catch (const char* e){
        cout << e << endl;
    }
}

void Robot::afficher() {
    std::cout << "Etat : " << *_etat << ", Position : " << _position << ", Direction : " << _direction << std::endl;
}

const Position &Robot::get_position() const {
    return _position;
}
