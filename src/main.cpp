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
        cout << "Could not open file" << endl;
        exit(-1);
    }

    Invocateur invocateur(&r, &inFile);
    //Invocateur invocateur(&r, &std::cin);


    invocateur.invoke();
}