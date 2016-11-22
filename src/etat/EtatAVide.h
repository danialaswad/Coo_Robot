//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_ETATAVIDE_H
#define COO_ROBOT_ETATAVIDE_H


#include "EtatEnRoute.h"

class EtatAVide: public EtatEnRoute {

private:
    static EtatAVide* instanceUnique;

protected:
    EtatAVide(){};

public:
    static EtatAVide* instance();

    // Changement de etat
    virtual EtatRobot* rencontrerPlot();

    // reste dans l'etat courant
    virtual EtatRobot* avancer();
    virtual EtatRobot* tourner();

};


#endif //COO_ROBOT_ETATAVIDE_H
