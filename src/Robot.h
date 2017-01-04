//
// Created by danial on 15/11/16.
//

#ifndef COO_ROBOT_ROBOT_H
#define COO_ROBOT_ROBOT_H

#include <iostream>
#include <string.h>
#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "etat/EtatRobot.h"
#include "etat/EtatAVide.h"
#include "etat/EtatAVideFacePlot.h"
#include "observateur/Observable.h"

using namespace std;

class Robot : public Observable{
private:
    EtatRobot* _etat = EtatAVide::instance();
    string _direction;
    Position _position;
    Objet _objet;
    Plot _plot;

public:
    // constructor
    Robot ():_direction("N"){};
    Robot (string direction): _direction(direction), _position(0,0){};
    // member function
    void avancer(Position p);
    void tourner(string direction);
    void saisir(Objet objet);
    void poser();
    int peser();
    void rencontrerPlot(Plot p);
    int evaluerPlot();
    void figer();
    void repartir();
    void afficher();

    //getter
    const Position &get_position() const;
};


#endif //COO_ROBOT_ROBOT_H
