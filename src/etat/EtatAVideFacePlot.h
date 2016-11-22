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

    virtual EtatRobot* evaluerPlot();
    virtual EtatRobot* saisir();
    virtual EtatRobot* tourner();

};


#endif //COO_ROBOT_ETATAVIDEFACEPLOT_H
