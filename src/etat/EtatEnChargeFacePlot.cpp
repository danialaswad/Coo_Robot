//
// Created by danial on 22/11/16.
//

#include "EtatEnChargeFacePlot.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"

EtatEnChargeFacePlot* EtatEnChargeFacePlot::instanceUnique = new EtatEnChargeFacePlot();

EtatEnChargeFacePlot *EtatEnChargeFacePlot::instance() {
    return instanceUnique;
}

EtatRobot *EtatEnChargeFacePlot::poser() {
    return EtatAVideFacePlot::instance();
}

EtatRobot *EtatEnChargeFacePlot::peser() {
    return this;
}

EtatRobot *EtatEnChargeFacePlot::evaluerPlot() {
    return this;
}

EtatRobot *EtatEnChargeFacePlot::tourner() {
    return EtatEnCharge::instance();
}
