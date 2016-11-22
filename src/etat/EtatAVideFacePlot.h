//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_ETATAVIDEFACEPLOT_H
#define COO_ROBOT_ETATAVIDEFACEPLOT_H


#include "EtatEnRoute.h"

class EtatAVideFacePlot: public EtatEnRoute {

private:
    static  EtatAVideFacePlot* instanceUnique;

protected:
    EtatAVideFacePlot(){};

public:
    static EtatAVideFacePlot* instance();

    // changemet d'etat
    virtual EtatRobot* saisir();
    virtual EtatRobot* tourner();

    // reste dans l'etat courant
    virtual EtatRobot* evaluerPlot();

};


#endif //COO_ROBOT_ETATAVIDEFACEPLOT_H
