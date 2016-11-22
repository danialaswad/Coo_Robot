//
// Created by danial on 22/11/16.
//

#include "EtatEnRoute.h"

EtatEnRoute* EtatEnRoute::instanceUnique = new EtatEnRoute();

EtatEnRoute *EtatEnRoute::instance() {
    return instanceUnique;
}
