//
// Created by danial on 29/11/16.
//

#ifndef COO_ROBOT_INVOCATEUR_H
#define COO_ROBOT_INVOCATEUR_H

#include <iostream>
#include "../Robot.h"


class Invocateur {

private:
    Robot* _robot;

public:
    Invocateur(Robot* r) : _robot(r){};

    void invoke();
    int next_int();
    std::string next_word();
    Robot* getTargetRobot() const;
};


#endif //COO_ROBOT_INVOCATEUR_H
