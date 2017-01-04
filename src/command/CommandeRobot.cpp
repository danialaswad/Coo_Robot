//
// Created by danial on 29/11/16.
//

#include "CommandeRobot.h"

CommandeRobot::CommandeRobot(Robot* robot) : _recepteur(robot) {}

CommandeRobot::CommandeRobot(const string &s) : Commande(s) {}
