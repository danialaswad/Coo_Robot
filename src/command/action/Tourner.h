//
// Created by danial on 29/11/16.
//

#ifndef COO_ROBOT_TOURNER_H
#define COO_ROBOT_TOURNER_H


#include "../CommandeRobot.h"

class Tourner : public CommandeRobot{

public:
    std::string _previous_direction;
    std::string _next_direction;

    static Tourner CMD_TOURNER;
    Tourner(string s):CommandeRobot(s){};
    Tourner(Robot* robot, string direction):CommandeRobot(robot),_next_direction(direction){};
    virtual void execute();

    void desexecute() override;

    virtual Commande* constructeurVirtuel(Invocateur& invocateur);
};


#endif //COO_ROBOT_TOURNER_H
