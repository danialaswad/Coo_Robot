//
// Created by danial on 06/12/16.
//

#include "Poser.h"

void Poser::execute() {
}


Commande *Poser::constructeurVirtuel(Invocateur &invocateur) {
    return new Poser("poser");
}

