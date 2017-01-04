//
// Created by danial on 29/11/16.
//

#ifndef COO_ROBOT_TOURNER_H
#define COO_ROBOT_TOURNER_H


#include "../CommandeRobot.h"

class Tourner : public CommandeRobot{

public:
    static Tourner CMD_TOURNER;
    string _direction;
    Tourner(string s):CommandeRobot(s){};
    Tourner(string direction, bool doesNothing):_direction(direction){};
    virtual void execute();

    virtual Commande* constructeurVirtuel(Invocateur& invocateur);
};


#endif //COO_ROBOT_TOURNER_H
