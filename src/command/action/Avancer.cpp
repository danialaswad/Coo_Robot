//
// Created by danial on 29/11/16.
//

#include "Avancer.h"

void Avancer::execute() {
}

Commande *Avancer::constructeurVirtuel(Invocateur& invocateur) {
    return new Avancer();
}
