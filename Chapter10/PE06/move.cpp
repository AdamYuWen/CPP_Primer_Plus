// move.cpp -- impletmenting the Move class
#include <iostream>
#include "move.h"

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    std::cout << "The move to x = " << x << ", y = " << y << std::endl;
}

Move Move::add(const Move& m) const {
    Move res;
    res.x += m.x;
    res.y += m.y;
    return res;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}