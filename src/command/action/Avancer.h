//
// Created by danial on 29/11/16.
//

#ifndef COO_ROBOT_AVANCER_H
#define COO_ROBOT_AVANCER_H


#include "../CommandeRobot.h"

class Avancer : public CommandeRobot{


public:
    Position _new;
    Position _previous;


    static Avancer CMD_AVANCER;

    Avancer(string s) : CommandeRobot(s) {};
    Avancer(Robot* robot, int x, int y):CommandeRobot(robot), _new(x,y){};

    virtual Commande* constructeurVirtuel(Invocateur& invocateur);

    virtual void execute();
    void desexecute() override;
};


#endif //COO_ROBOT_AVANCER_H
