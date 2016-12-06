//
// Created by danial on 22/11/16.
//

#include "Commande.h"
using namespace std;

map<string, Commande *> &Commande::commandeInvoque() {
    static map<string, Commande*>* comInvoque = new map<string, Commande*>;
    return *comInvoque;
}

Commande *Commande::constructeurVirtuel(Invocateur& invocateur) {
    return nullptr;
}

static Commande *Commande::nouvelleCommande(std::string d) {
    return commandeInvoque()[d]->constructeurVirtuel(*_invocateur);
}

void Commande::execute() {

}

void Commande::desexecute() {

}