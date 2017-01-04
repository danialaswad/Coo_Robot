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
    int _last_x;
    int _last_y;

    static Avancer CMD_AVANCER;

    Avancer(string s) : CommandeRobot(s) {};
    Avancer(Robot* robot, int x, int y):CommandeRobot(robot), _x(x), _y(y){};

    virtual Commande* constructeurVirtuel(Invocateur& invocateur);
    virtual void execute();

    void desexecute() override;
};


#endif //COO_ROBOT_AVANCER_H
