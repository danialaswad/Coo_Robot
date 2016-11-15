//
// Created by danial on 15/11/16.
//

#ifndef COO_ROBOT_OBJET_H
#define COO_ROBOT_OBJET_H


class Objet {
private:
    int _weight;

public:
    // constructor
    Objet(int weight = 0) : _weight(weight){};
    // getter
    int get_weight();
};


#endif //COO_ROBOT_OBJET_H
