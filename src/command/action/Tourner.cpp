//
// Created by danial on 29/11/16.
//

#include "Tourner.h"

Tourner Tourner::CMD_TOURNER("TOURNER");

void Tourner::execute() {

}

Commande *Tourner::constructeurVirtuel(Invocateur &invocateur) {
    string direction=invocateur.next_word();
    // Comme le constructeur qu'on souhaite utiliser pour remplir la map
    // et celui pour créer la commande utilise le même type d'argument,
    // On a choisit de créer un second constructeur avec un protype différent
    // Pour pouvoir choisir avec la surcharge lequel on utilise
    return new Tourner(direction,false);
}
