//
// Created by danial on 15/11/16.
//

#ifndef COO_ROBOT_PLOT_H
#define COO_ROBOT_PLOT_H


class Plot{
private:
    int _hauteur;

public:
    // constructor
    Plot(int h = 0): _hauteur(h){};

    // getter
    int getHauteur();
};


#endif //COO_ROBOT_PLOT_H
