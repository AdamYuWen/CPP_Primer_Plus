// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt {
public:
    enum Mode { STONE, INTPOUNDS, FLOATPOUNDS };

    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();

    Stonewt set_stone_mode();
    Stonewt set_intpounds_mode();
    Stonewt set_folatpounds_mode();

    Stonewt operator+(const Stonewt& stonewt) const;
    Stonewt operator-(const Stonewt& stonewt) const;
    Stonewt operator*(double n) const;

    friend Stonewt operator*(double n, Stonewt& stonewt);
    friend std::ostream& operator<<(std::ostream& os, const Stonewt& stonewt);
private:
    enum { Lbs_per_stn = 14 };
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
};

#endif // STONEWT_H_