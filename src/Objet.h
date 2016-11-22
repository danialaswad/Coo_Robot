//
// Created by danial on 15/11/16.
//

#ifndef COO_ROBOT_OBJET_H
#define COO_ROBOT_OBJET_H


class Objet {
private:
    int _poids;

public:
    // constructor
    Objet(int p = 0) : _poids(p){};
    // getter
    int get_poid();
};


#endif //COO_ROBOT_OBJET_H
