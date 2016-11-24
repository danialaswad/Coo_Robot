//
// Created by Maxime on 24/11/2016.
//

#include "RobotObserver.h"
#include "src/Robot.h"

RobotObserver::RobotObserver() {

}

void RobotObserver::update(Observable *observable) {
    if(Robot *r=dynamic_cast<Robot*>(observable)){
        r->afficher();
    }
}