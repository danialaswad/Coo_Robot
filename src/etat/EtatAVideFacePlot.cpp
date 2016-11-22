//
// Created by danial on 22/11/16.
//

#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"
#include "EtatAVide.h"

EtatAVideFacePlot* EtatAVideFacePlot::instanceUnique = new EtatAVideFacePlot();

EtatAVideFacePlot *EtatAVideFacePlot::instance() {
    return instanceUnique;
}

EtatRobot *EtatAVideFacePlot::saisir() {
    return EtatEnChargeFacePlot::instance();
}

EtatRobot *EtatAVideFacePlot::tourner() {
    return EtatAVide::instance();
}

EtatRobot *EtatAVideFacePlot::evaluerPlot() {
    return this;
}
