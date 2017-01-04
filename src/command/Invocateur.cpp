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
    (*_input_stream) >> command_name;
    while(command_name.compare("quit")!=0 || command_name.compare("quit")!=0 ) {
        Commande *com = Commande::nouvelleCommande(command_name, this);
        com->execute();
        cout << "Commande : " ;
        (*_input_stream) >> command_name;
    }
}

int Invocateur::next_int() {
    int next_int;
    try {
        (*_input_stream) >> next_int;
    }
    catch (const exception& e) {
        e.what();
        exit(-1);
    }
    return next_int;
}

string Invocateur::next_word() {
    string next_word;
    try {
        (*_input_stream) >> next_word;
    }
    catch (const exception& e){
        e.what();
        exit(-1);
    }
    return next_word;
}

Robot* Invocateur::getTargetRobot() const{
    return _robot;
}

