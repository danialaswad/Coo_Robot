//
// Created by danial on 29/11/16.
//

#ifndef COO_ROBOT_AVANCER_H
#define COO_ROBOT_AVANCER_H


#include "../CommandeRobot.h"

class Avancer : public CommandeRobot{


public:
    int _x;
    int _y;
    static Avancer CMD_AVANCER;

    Avancer(string s) : CommandeRobot(s) {};
    Avancer(int x, int y):_x(x), _y(y){};
    virtual Commande* constructeurVirtuel(Invocateur& invocateur);
    virtual void execute();
};


#endif //COO_ROBOT_AVANCER_H
