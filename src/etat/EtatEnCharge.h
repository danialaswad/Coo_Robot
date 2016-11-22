//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_ETATENCHARGE_H
#define COO_ROBOT_ETATENCHARGE_H


#include "EtatEnRoute.h"

class EtatEnCharge: public EtatEnRoute {

private:
    static EtatEnCharge *instanceUnique;

protected:
    EtatEnCharge() {};

public:
    static EtatEnCharge* instance();

    // changement d'etat
    virtual EtatRobot* rencontrerPlot();

    // reste dans l'etat courant
    virtual EtatRobot* peser();
    virtual EtatRobot* avancer();
    virtual EtatRobot* tourner();
};


#endif //COO_ROBOT_ETATENCHARGE_H
