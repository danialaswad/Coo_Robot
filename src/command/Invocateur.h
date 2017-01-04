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
    std::istream* _input_stream;

public:
    Invocateur(Robot* r, std::istream* is) : _robot(r) {
        _input_stream =is;
    };
    void invoke();
    int next_int();
    std::string next_word();
    Robot* getTargetRobot() const;
};


#endif //COO_ROBOT_INVOCATEUR_H
