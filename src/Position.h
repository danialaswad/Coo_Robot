//
// Created by Maxime on 15/11/2016.
//

#ifndef COO_ROBOT_POSITION_H
#define COO_ROBOT_POSITION_H


class Position {

private:
    int _x;
    int _y;

public:
    // constructor
    Position(int x=0 , int y = 0): _x(x), _y(y){};

    //gettere and setter
    int get_x() const ;
    void set_x(int x) ;
    int get_y() const ;
    void set_y(int y) ;
};


#endif //COO_ROBOT_POSITION_H

