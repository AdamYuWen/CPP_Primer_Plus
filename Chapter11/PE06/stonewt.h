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

    void show_lbs() const;
    void show_stn() const;

    bool operator==(const Stonewt& stonewt) const;
    bool operator!=(const Stonewt& stonewt) const;
    bool operator<(const Stonewt& stonewt) const;
    bool operator<=(const Stonewt& stonewt) const;
    bool operator>(const Stonewt& stonewt) const;
    bool operator>=(const Stonewt& stonewt) const;
private:
    enum { Lbs_per_stn = 14 };
    int stone;
    double pds_left;
    double pounds;
};

#endif // STONEWT_H_