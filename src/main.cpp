#include <iostream>
#include <fstream>
#include "Robot.h"
#include "observateur/RobotObserver.h"
#include "command/Commande.h"


int main() {
    Robot r = Robot("N");
    Observer* observer= new RobotObserver;
    r.attach(observer);

    ifstream inFile;
    inFile.open("COMMAND.txt");
    if(!inFile.good()) {
        cout << "Could not open 'COMMAND.txt' (muste be in the same folder), reading from cin" << endl;
        Invocateur invocateur(&r, &std::cin);
        invocateur.invoke();
    } else {
        Invocateur invocateur(&r, &inFile);
        invocateur.invoke();
    }
}