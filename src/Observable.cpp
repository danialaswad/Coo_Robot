//
// Created by Maxime on 24/11/2016.
//

#include <algorithm>
#include "Observable.h"

Observable::~Observable() {

}

void Observable::attach(Observer *observer) {
    _observers.push_back(observer);
}

void Observable::detach(Observer *observer) {
    std::vector<Observer *>::iterator newEnd = std::remove(_observers.begin(), _observers.end(), observer);
    _observers.erase(newEnd, _observers.end());
}

void Observable::notify(Observer *observer) {
    observer->update(nullptr);
}

void Observable::notifyAll() {
    for (Observer *o : _observers) {
        o->update(this);
    }
}
