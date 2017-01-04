//
// Created by danial on 06/12/16.
//

#include "Poser.h"

Poser Poser::CMD_POSER("POSER");

void Poser::execute() {
    _recepteur->poser();
}


Commande *Poser::constructeurVirtuel(Invocateur &invocateur) {
    Commande* cmd=new Poser(invocateur.getTargetRobot());
    Commande::previous_actions.push(cmd);
    return cmd;
}

void Poser::desexecute() {
    return;
}

