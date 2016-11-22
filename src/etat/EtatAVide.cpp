//
// Created by danial on 22/11/16.
//

#include "EtatAVide.h"

EtatAVide* EtatAVide::instanceUnique = new EtatAVide();

EtatAVide *EtatAVide::instance() {
    return instanceUnique;
}

EtatRobot *EtatAVide::avancer() {
    return this;
}
