//
// Created by danial on 29/11/16.
//

#include "Avancer.h"

Avancer Avancer::CMD_AVANCER("AVANCER");

void Avancer::execute() {
    _previous = _recepteur->get_position();
    _recepteur->avancer(_new);
}

Commande *Avancer::constructeurVirtuel(Invocateur& invocateur) {
    int new_x=invocateur.next_int();
    int new_y=invocateur.next_int();
    Commande* cmd= new Avancer(invocateur.getTargetRobot(),new_x, new_y);
    Commande::previous_actions.push(cmd);
    return cmd;
}

void Avancer::desexecute() {
    _recepteur->avancer(_previous);
}
