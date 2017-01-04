//
// Created by danial on 06/12/16.
//

#include "Poser.h"

Poser Poser::CMD_POSER("POSER");

void Poser::execute() {
}


Commande *Poser::constructeurVirtuel(Invocateur &invocateur) {
    return new Poser(invocateur.getTargetRobot());
}

void Poser::desexecute() {
    return;
}

