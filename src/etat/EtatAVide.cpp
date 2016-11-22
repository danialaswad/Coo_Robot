//
// Created by danial on 22/11/16.
//

#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"

EtatAVide* EtatAVide::instanceUnique = new EtatAVide();

EtatAVide *EtatAVide::instance() {
    return instanceUnique;
}

EtatRobot *EtatAVide::avancer() {
    return this;
}

EtatRobot *EtatAVide::tourner() {
    return this;
}

EtatRobot *EtatAVide::rencontrerPlot() {
    return EtatAVideFacePlot::instance();
}
