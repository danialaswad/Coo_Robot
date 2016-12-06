//
// Created by danial on 06/12/16.
//

#ifndef COO_ROBOT_POSER_H
#define COO_ROBOT_POSER_H


#include "../Commande.h"

class Poser : public Commande{

public:
    virtual void execute();

    virtual Commande* constructeurVirtuel(Invocateur& invocateur);
};


#endif //COO_ROBOT_POSER_H
