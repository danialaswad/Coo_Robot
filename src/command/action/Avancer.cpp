//
// Created by danial on 29/11/16.
//

#include "Avancer.h"

void Avancer::execute() {
}

Commande *Avancer::constructeurVirtuel(Invocateur& invocateur) {
    int new_x=invocateur.next_int();
    int new_y=invocateur.next_int();
    return new Avancer("avancer", new_x, new_y);
}
