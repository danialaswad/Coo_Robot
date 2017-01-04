//
// Created by Maxime on 04/01/2017.
//

#include "Annuler.h"

Annuler Annuler::CMD_ANNULER("ANNULER");

Commande *Annuler::constructeurVirtuel(Invocateur &invocateur) {
    return new Annuler();
}

void Annuler::execute() {
    if (Commande::previous_actions.size() > 0) {
        Commande::previous_actions.top()->desexecute();
        Commande::previous_actions.pop();
    }
}

void Annuler::desexecute() {

}

Annuler::Annuler() {

}
