//
// Created by danial on 29/11/16.
//

#include "Tourner.h"

void Tourner::execute() {

}

Commande *Tourner::constructeurVirtuel(Invocateur &invocateur) {
    return new Tourner("tourner", "N");
}
