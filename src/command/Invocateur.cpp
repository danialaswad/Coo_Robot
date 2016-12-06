//
// Created by danial on 29/11/16.
//

#include "Invocateur.h"
#include "Commande.h"
#include <iostream>


using namespace std;

void Invocateur::invoke() {
    string s;
    cout << "Commande : " ;
    cin >> s;
    Commande* com = Commande::nouvelleCommande(s);
    com->execute();
}
