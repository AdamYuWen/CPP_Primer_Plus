// vector.h -- Vector class
#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace vector {
    class Vector {
    public:
        // RECT for rectangular, POL for Polar modes
        enum Mode { RECT, POL };

        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();

        double x() const { return x_; }     // report x values
        double y() const { return y_; }     // report y values
        double mag() const { return mag_; } // report magnitude
        double ang() const { return ang_; } // report angle

        void polar_mode(); // set model to POL
        void rect_mode();  // set model to RECT

        Vector operator+(const Vector& b) const;
        Vector operator-(const Vector& b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector& a);
        friend std::ostream& operator<<(std::ostream& os, const Vector& v);

    private:
        double x_;   // horizontal value
        double y_;   // vertical value
        double mag_; // length of vector
        double ang_; // direction of vector in degrees
        Mode mode_;  // RECT or POL

        void set_x();
        void set_y();
        void set_mag();
        void set_ang();
    };
} // namespace vector

#endif // VECTOR_H_