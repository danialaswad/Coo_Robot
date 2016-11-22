//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_ETATENROUTE_H
#define COO_ROBOT_ETATENROUTE_H


#include "../EtatRobot.h"

class EtatEnRoute : public EtatRobot {

private:
    static EtatEnRoute* instanceUnique;

protected:
    EtatEnRoute(){};

public:
    static virtual EtatEnRoute* instance();
};


#endif //COO_ROBOT_ETATENROUTE_H
