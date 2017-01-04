//
// Created by Maxime on 04/01/2017.
//

#ifndef COO_ROBOT_ANNULER_H
#define COO_ROBOT_ANNULER_H


#include "../CommandeRobot.h"

class Annuler : public Commande {
public:
    Annuler();
    Annuler(std::string s):Commande(s){};

    static Annuler CMD_ANNULER;

    virtual Commande* constructeurVirtuel(Invocateur &invocateur);

    void execute() override;
    void desexecute() override;
};


#endif //COO_ROBOT_ANNULER_H
