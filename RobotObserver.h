//
// Created by Maxime on 24/11/2016.
//

#ifndef COO_ROBOT_ROBOTOBSERVER_H
#define COO_ROBOT_ROBOTOBSERVER_H


#include "src/Observer.h"

class RobotObserver : public Observer{
public:
    RobotObserver();
    void update(Observable *observable) override;
};


#endif //COO_ROBOT_ROBOTOBSERVER_H
