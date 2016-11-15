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
    virtual EtatRobot avancer(int x, int y)=0;

    virtual EtatRobot touner(std::string new_diection)=0;

    virtual EtatRobot saisir(Objet o)=0;

    virtual EtatRobot poser()=0;

    virtual EtatRobot peser()=0;

    virtual EtatRobot rencontrerPlot(Plot p)=0;

    virtual EtatRobot evaluerPlot()=0;

    virtual EtatRobot figer()=0;

    virtual EtatRobot repartir()=0;

    virtual EtatRobot afficher()=0;
};


#endif //COO_ROBOT_ETATROBOT_H
