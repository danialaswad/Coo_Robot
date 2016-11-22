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
#include "EtatRobot.h"

using namespace std;

class Robot {
private:
    string _direction;
    Position _position;
public:
    // constructor
    Robot ():_direction("N"){};
    Robot (string direction): _direction(direction), _position(0,0){};
    // member function
    void avancer(int x, int y);
    void tourner(string direction);
    void saisir(Objet objet);
    void poser();
    int peser();
    void rencontrerPlot(Plot p);
    int evaluerPlot();
    void figer();
    void repartir();
    void afficher();
};


#endif //COO_ROBOT_ROBOT_H
