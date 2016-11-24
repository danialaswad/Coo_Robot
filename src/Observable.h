//
// Created by Maxime on 24/11/2016.
//
#ifndef COO_ROBOT_OBSERVABLE_H
#define COO_ROBOT_OBSERVABLE_H

#include <vector>
#include "Observer.h"


class Observable {
    std::vector<Observer *> _observers;
public:

    virtual ~Observable();

    void attach(Observer *observer);

    void detach(Observer *observer);

    void notify(Observer *observer);

    void notifyAll();
};


#endif //COO_ROBOT_OBSERVABLE_H
