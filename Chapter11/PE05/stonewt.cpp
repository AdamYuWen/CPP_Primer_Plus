// stonewt.cpp -- Stonewt methods
#include <iostream>
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn; // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = FLOATPOUNDS;
}

// construct Stronewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = STONE;
}

// default constructor, wt = 0
Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
    mode = STONE;
}

// destructor
Stonewt::~Stonewt() {}

// set to stone form
Stonewt Stonewt::set_stone_mode() {
    mode = STONE;
    return *this;
}

// set to integer pounds form
Stonewt Stonewt::set_intpounds_mode() {
    mode = INTPOUNDS;
    return *this;
}

// set to floating-point pounds form
Stonewt Stonewt::set_folatpounds_mode() {
    mode = FLOATPOUNDS;
    return *this;
}

// addition operator overloading
Stonewt Stonewt::operator+(const Stonewt& stonewt) const {
    double sum;
    sum = pounds + stonewt.pounds;
    return Stonewt(sum);
}

// subtract operator overloading
Stonewt Stonewt::operator-(const Stonewt& stonewt) const {
    double diff;
    diff = pounds - stonewt.pounds;
    return Stonewt(diff);
}

// multiply operator overloading (Stonewt * n)
Stonewt Stonewt::operator*(double n) const {
    double mult;
    mult = pounds * n;
    return Stonewt(mult);
}

// multiply operator overloading (n * Stonewt)
Stonewt operator*(double n, Stonewt& stonewt) {
    return stonewt * n;
}

// ostream operator overloading
std::ostream& operator<<(std::ostream& os, const Stonewt& stonewt) {
    if (stonewt.mode == Stonewt::STONE) {
        os << stonewt.stone << " stone, " << stonewt.pds_left << " pounds";
    } else if (stonewt.mode == Stonewt::INTPOUNDS) {
        os << int(stonewt.pounds) << " pounds";
    } else if (stonewt.mode == Stonewt::FLOATPOUNDS) {
        os << stonewt.pounds << " pounds";
    } else {
        std::cout << "It should not be other modes." << std::endl;
    }
    return os;
}