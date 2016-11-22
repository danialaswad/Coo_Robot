//
// Created by danial on 22/11/16.
//

#include "EtatEnCharge.h"

EtatEnCharge* EtatEnCharge::instanceUnique = new EtatEnCharge();

EtatEnCharge *EtatEnCharge::instance() {
    return instanceUnique;
}

EtatRobot *EtatEnCharge::avancer() {
    return this;
}
