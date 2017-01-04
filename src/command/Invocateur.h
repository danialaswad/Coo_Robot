//
// Created by danial on 29/11/16.
//

#ifndef COO_ROBOT_INVOCATEUR_H
#define COO_ROBOT_INVOCATEUR_H

#include <iostream>


class Invocateur {

public:
    void invoke();

    int next_int();

    std::string next_word();
};


#endif //COO_ROBOT_INVOCATEUR_H
