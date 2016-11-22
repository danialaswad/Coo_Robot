//
// Created by danial on 22/11/16.
//

#include "EtatAVideFacePlot.h"
#include "EtatEnChargeFacePlot.h"

EtatAVideFacePlot* EtatAVideFacePlot::instanceUnique = new EtatAVideFacePlot();

EtatAVideFacePlot *EtatAVideFacePlot::instance() {
    return instanceUnique;
}

EtatRobot *EtatAVideFacePlot::saisir() {
    return EtatEnChargeFacePlot::instance();
}
