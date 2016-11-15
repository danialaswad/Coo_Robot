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
    int get_x() const {
        return _x;
    }

    void set_x(int x) {
        _x = x;
    }

    int get_y() const {
        return _y;
    }

    void set_y(int y) {
        _y = y;
    }
};


#endif //COO_ROBOT_POSITION_H
