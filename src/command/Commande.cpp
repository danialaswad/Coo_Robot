//
// Created by danial on 22/11/16.
//

#include "Commande.h"
#include <iostream>
using namespace std;

std::stack<Commande*> Commande::previous_actions;

map<string, Commande *> &Commande::commandeInvoque() {
    // TODO les parenthèses ici ?
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
    cout << "Map <- " << s << endl;
}

Commande::Commande() {}
