#include <iostream>
#include "Robot.h"

using namespace std;

int main() {
    Robot r = Robot("N");
    r.afficher();
    r.avancer(0, 1);
    r.afficher();
    r.tourner("S");
    r.afficher();
    Plot p;
    r.rencontrerPlot(p);
    r.afficher();
    Objet o;
    r.saisir(o);
    r.afficher();
}