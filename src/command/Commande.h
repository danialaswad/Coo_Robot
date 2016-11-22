//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_COMMANDE_H
#define COO_ROBOT_COMMANDE_H


#include "../EtatRobot.h"

class Commande {

public:
    virtual EtatRobot* execute();
};


#endif //COO_ROBOT_COMMANDE_H
