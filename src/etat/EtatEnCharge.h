//
// Created by danial on 22/11/16.
//

#ifndef COO_ROBOT_ETATENCHARGE_H
#define COO_ROBOT_ETATENCHARGE_H


#include "EtatEnRoute.h"

class EtatEnCharge: EtatEnRoute {

private:
    static EtatEnCharge *instanceUnique;

protected:
    EtatEnCharge() {};

public:
    static EtatEnCharge* instance();
};


#endif //COO_ROBOT_ETATENCHARGE_H
