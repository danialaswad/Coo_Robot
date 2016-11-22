//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_ETATENCHARGEFACEPLOT_H
#define COO_ROBOT_ETATENCHARGEFACEPLOT_H


#include "EtatEnRoute.h"

class EtatEnChargeFacePlot: public EtatEnRoute {

private:
    static EtatEnChargeFacePlot* instanceUnique;

protected:
    EtatEnChargeFacePlot(){};

public:
    static EtatEnChargeFacePlot* instance();

    // changement d'etat
    virtual EtatRobot* tourner();
    virtual EtatRobot* poser();

    // reste dans l'etat
    virtual EtatRobot* peser();
    virtual EtatRobot* evaluerPlot();
};


#endif //COO_ROBOT_ETATENCHARGEFACEPLOT_H
