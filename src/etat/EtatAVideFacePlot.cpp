//
// Created by danial on 22/11/16.
//

#include "EtatAVideFacePlot.h"

EtatAVideFacePlot* EtatAVideFacePlot::instanceUnique = new EtatAVideFacePlot();

EtatAVideFacePlot *EtatAVideFacePlot::instance() {
    return instanceUnique;
}
