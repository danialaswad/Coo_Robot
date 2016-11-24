#include <iostream>
#include "Robot.h"
#include "observateur/RobotObserver.h"

using namespace std;

int main() {
    Robot r = Robot("N");
    Observer* observer= new RobotObserver;
    r.attach(observer);
    //r.afficher();
    r.avancer(0, 1);
    //r.afficher();
    r.tourner("S");
    //r.afficher();
    Plot p;
    r.rencontrerPlot(p);
    //r.afficher();
    Objet o(30);
    r.saisir(o);
    //r.afficher();
    r.peser();
    r.figer();
    //r.afficher();
}