#include <iostream>
#include "Robot.h"
#include "observateur/RobotObserver.h"
#include "command/Commande.h"


int main() {
    Robot r = Robot("N");
    Observer* observer= new RobotObserver;
    r.attach(observer);
    Invocateur invocateur(&r);
    invocateur.invoke();
}