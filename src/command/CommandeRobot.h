//
// Created by danial on 29/11/16.
//

#ifndef COO_ROBOT_COMMANDEROBOT_H
#define COO_ROBOT_COMMANDEROBOT_H


#include "../etat/EtatRobot.h"
#include "../etat/EtatAVide.h"
#include "Commande.h"
#include "../Robot.h"

class CommandeRobot : public Commande {
public:
    CommandeRobot(Robot* robot);

    CommandeRobot(const string &s);

protected:
    Robot* _recepteur;
};


#endif //COO_ROBOT_COMMANDEROBOT_H
