//
// Created by danial on 22/11/16.
//

#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"

EtatEnCharge* EtatEnCharge::instanceUnique = new EtatEnCharge();

EtatEnCharge *EtatEnCharge::instance() {
    return instanceUnique;
}

EtatRobot *EtatEnCharge::avancer() {
    return this;
}

EtatRobot *EtatEnCharge::tourner() {
    return this;
}

EtatRobot *EtatEnCharge::rencontrerPlot() {
    return EtatEnChargeFacePlot::instance();
}

EtatRobot *EtatEnCharge::peser() {
    return this;
}
