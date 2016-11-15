//
// Created by danial on 15/11/16.
//

#ifndef COO_ROBOT_ETATROBOT_H
#define COO_ROBOT_ETATROBOT_H


#include <string>
#include "Objet.h"
#include "Plot.h"

class EtatRobot {
public:
    virtual EtatRobot avancer(int x, int y);

    virtual EtatRobot touner(std::string new_diection);

    virtual EtatRobot saisir(Objet o);

    virtual EtatRobot poser();

    virtual EtatRobot peser();

    virtual EtatRobot rencontrerPlot(Plot p);

    virtual EtatRobot evaluerPlot();

    virtual EtatRobot figer();

    virtual EtatRobot repartir();

    virtual EtatRobot afficher();
};


#endif //COO_ROBOT_ETATROBOT_H
