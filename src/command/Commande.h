//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_COMMANDE_H
#define COO_ROBOT_COMMANDE_H


#include <map>
#include <string>
#include "../etat/EtatRobot.h"
#include "Invocateur.h"

class Commande {

private:
    Invocateur* invocateur = new Invocateur;
    static std::map<std::string,Commande*> &commandeInvoque();

public:
    Commande(){};
    static Commande* nouvelleCommande(std::string d);
    virtual Commande* constructeurVirtuel();


    virtual void execute();
    virtual void desexecute();
};


#endif //COO_ROBOT_COMMANDE_H
