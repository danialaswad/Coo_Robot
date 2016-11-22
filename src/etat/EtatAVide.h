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

    virtual EtatRobot* avancer();
    virtual EtatRobot* tourner();
    virtual EtatRobot* rencontrerPlot();

};


#endif //COO_ROBOT_ETATAVIDE_H
