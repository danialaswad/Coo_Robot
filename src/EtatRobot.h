//
// Created by danial on 15/11/16.
//

#ifndef COO_ROBOT_ETATROBOT_H
#define COO_ROBOT_ETATROBOT_H


#include <string>
#include <ostream>
#include <typeinfo>
#include "Objet.h"
#include "Plot.h"

class EtatRobot {

private:
    static EtatRobot* instanceUnique;

protected:
    EtatRobot(){};

public:

    static EtatRobot* instance();

    virtual EtatRobot* avancer();

    virtual EtatRobot* touner();

    virtual EtatRobot* saisir();

    virtual EtatRobot* poser();

    virtual EtatRobot* peser();

    virtual EtatRobot* rencontrerPlot();

    virtual EtatRobot* evaluerPlot();

    virtual EtatRobot* figer();

    virtual EtatRobot* repartir();

    virtual EtatRobot* afficher();

    friend std::ostream &operator<<(std::ostream &os, const EtatRobot &robot);
};


#endif //COO_ROBOT_ETATROBOT_H
