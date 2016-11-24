//
// Created by danial on 22/11/16.
//

#include "EtatEnRoute.h"
#include "EtatFiger.h"

EtatEnRoute* EtatEnRoute::instanceUnique = new EtatEnRoute();

EtatEnRoute *EtatEnRoute::instance() {
    return instanceUnique;
}

EtatRobot *EtatEnRoute::figer() {
    return EtatFiger::instance(this);
}
