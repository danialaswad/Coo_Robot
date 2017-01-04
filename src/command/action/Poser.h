//
// Created by danial on 06/12/16.
//

#ifndef COO_ROBOT_POSER_H
#define COO_ROBOT_POSER_H


#include "../Commande.h"
#include "../CommandeRobot.h"

class Poser : public CommandeRobot{

public:
    Poser(Robot* robot): CommandeRobot(robot){};

    static Poser CMD_POSER;

    Poser(string s): CommandeRobot(s){};

    virtual void execute();

    void desexecute() override;

    virtual Commande* constructeurVirtuel(Invocateur& invocateur);
};


#endif //COO_ROBOT_POSER_H
