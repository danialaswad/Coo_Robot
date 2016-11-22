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
};


#endif //COO_ROBOT_ETATENCHARGEFACEPLOT_H
