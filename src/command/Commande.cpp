//
// Created by danial on 22/11/16.
//

#include "Commande.h"
using namespace std;

map<string, Commande *> &Commande::commandeInvoque() {
    static map<string, Commande*>* comInvoque = new map<string, Commande*>;
    return *comInvoque;
}

Commande *Commande::nouvelleCommande(string d, Invocateur* invocateur) {
    return commandeInvoque()[d]->constructeurVirtuel(*invocateur);
}

void Commande::execute() {

}

void Commande::desexecute() {

}

Commande::Commande(std::string s) {
    commandeInvoque()[s]=this;
}
