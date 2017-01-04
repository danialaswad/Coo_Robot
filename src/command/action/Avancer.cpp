//
// Created by danial on 29/11/16.
//

#include "Avancer.h"

Avancer Avancer::CMD_AVANCER("AVANCER");

void Avancer::execute() {
}

Commande *Avancer::constructeurVirtuel(Invocateur& invocateur) {
    int new_x=invocateur.next_int();
    int new_y=invocateur.next_int();
    return new Avancer(invocateur.getTargetRobot(),new_x, new_y);
}

void Avancer::desexecute() {
    return;
}
