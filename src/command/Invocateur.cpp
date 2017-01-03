//
// Created by danial on 29/11/16.
//

#include "Invocateur.h"
#include "Commande.h"
#include "../Robot.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <exception>


using namespace std;

void Invocateur::invoke() {
    string command_name;
    cout << "Commande : " ;
    cin >> command_name;
    while(command_name!="quit" || command_name!="q") {
        Commande *com = Commande::nouvelleCommande(command_name, this);
        com->execute();
        cin >> command_name;
    }
}

int Invocateur::next_int() {
    int next_int;
    try {
        cin >> next_int;
    }
    catch (exception const& e) {
        e.what();
        exit(-1);
    }
    return next_int;
}

