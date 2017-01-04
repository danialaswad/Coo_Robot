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
    static std::map<std::string,Commande*> &commandeInvoque();

protected:
    Commande();

public:
    Commande(std::string s);
    static Commande* nouvelleCommande(std::string d, Invocateur* invocateur);
    virtual Commande* constructeurVirtuel(Invocateur& invocateur)=0;


    virtual void execute()=0;
    virtual void desexecute()=0;
};


#endif //COO_ROBOT_COMMANDE_H
