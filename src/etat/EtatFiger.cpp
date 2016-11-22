//
// Created by danial on 15/11/16.
//

#include "EtatFiger.h"

EtatFiger* EtatFiger::instanceUniqe = new EtatFiger();

EtatFiger* EtatFiger::instance() {
    return instanceUniqe;
}
