//
// Created by danial on 29/11/16.
//

#include "Tourner.h"

Tourner Tourner::CMD_TOURNER("TOURNER");

void Tourner::execute() {
    _previous_direction = _recepteur->get_direction();
    _recepteur->tourner(_next_direction);
}

Commande *Tourner::constructeurVirtuel(Invocateur &invocateur) {
    string direction=invocateur.next_word();
    Commande* cmd= new Tourner(invocateur.getTargetRobot(), direction);
    Commande::previous_actions.push(cmd);
    return cmd;
}

void Tourner::desexecute() {
    _recepteur->tourner(_previous_direction);
}
