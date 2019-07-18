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

        double x() const { return x_; } // report x values
        double y() const { return y_; } // report y values
        double set_mag() const; // set the length of vector
        double set_ang() const; // set the direction of vector in degrees

        void polar_mode(); // set model to POL
        void rect_mode();  // set model to RECT

        Vector operator+(const Vector& b) const;
        Vector operator-(const Vector& b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector& a);
        friend std::ostream& operator<<(std::ostream& os, const Vector& v);

    private:
        double x_;  // horizontal value
        double y_;  // vertical value
        Mode mode_; // RECT or POL

        void set_x(const double& mag, const double& ang);
        void set_y(const double& mag, const double& ang);

    };
} // namespace vector

#endif // VECTOR_H_