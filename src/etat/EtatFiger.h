//
// Created by danial on 15/11/16.
//

#ifndef COO_ROBOT_ETATFIGER_H
#define COO_ROBOT_ETATFIGER_H


#include <stddef.h>
#include "../EtatRobot.h"

class EtatFiger : public EtatRobot {

private:
    static EtatFiger* instanceUniqe;

protected:
    EtatFiger(){};

public:
    static EtatFiger* instance();

    // changement d'etat
    virtual EtatRobot* repartir();

};


#endif //COO_ROBOT_ETATFIGER_H
