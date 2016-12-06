//
// Created by danial on 29/11/16.
//

#include "Invocateur.h"
#include "Commande.h"
#include "../Robot.h"
#include <iostream>
#include <vector>
#include <sstream>


using namespace std;


/**
 * Split a string around a delimiter and put tokens inside a vector
 * @param s The string to split
 * @param delim The delimiter to use
 * @param elems The vector where the token will be copied
 */
void split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
}

void parse(const std::vector<std::string> &args, Robot& robot) {
    if (args.size() < 1) {
        std::cout << "Command must have at least a name" << std::endl;
        return;
    }
    if (args[0] == "avancer") {
        if (args.size() != 3) {
            std::cout << "Wrong number of arguments, expect 2 (int,int), got " << args.size() - 1 << std::endl;
            return;
        }
        int new_x = stoi(args[1]);
        int new_y = stoi(args[2]);
        robot.avancer(new_x, new_y);
    } else {
        std::cout << "Unknown command '" << args[0] << "'" << std::endl;
    }
}


void Invocateur::invoke() {
    std::string line;
    std::vector<std::string> commands;
    getline(std::cin, line);
    while (line != "q") {
        split(line, ' ', commands);
        parse(commands, r);
        commands.clear();
        line.clear();
        getline(std::cin, line);
    }
}

