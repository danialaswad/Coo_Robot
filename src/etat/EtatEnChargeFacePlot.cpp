//
// Created by danial on 22/11/16.
//

#include "EtatEnChargeFacePlot.h"

EtatEnChargeFacePlot* EtatEnChargeFacePlot::instanceUnique = new EtatEnChargeFacePlot();

EtatEnChargeFacePlot *EtatEnChargeFacePlot::instance() {
    return instanceUnique;
}
