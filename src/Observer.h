//
// Created by Maxime on 24/11/2016.
//

#ifndef COO_ROBOT_OBSERVER_H
#define COO_ROBOT_OBSERVER_H

class Observable;

class Observer {
public:
    virtual void update(Observable *observable)=0;
};


#endif //COO_ROBOT_OBSERVER_H
