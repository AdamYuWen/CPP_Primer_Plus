// vector.cpp -- methods for the Vector class
#include <cmath>
#include "vector.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace vector {
    // compute degrees in one radian
    const double Rad_to_deg = 45.0 / atan(1.0);
    // should be about 57.2957795130823

    // public methods
    // default constructor
    Vector::Vector(){
        x_ = y_ = 0.0;
        mode_ = RECT;
    }

    // construct vector from rectanglular coordinates if form is r
    // (the default) or else from polar coordinates if form is p
    Vector::Vector(double n1, double n2, Mode form) {
        mode_ = form;
        if (form == RECT) {
            x_ = n1;
            y_ = n2;
        } else if (form == POL) {
            set_x(n1, n2);
            set_y(n1, n2);
        } else {
            cout << "Incorrect 3rd argument to Vector -- ";
            cout << "vector set to 0\n";
            x_ = y_ = 0.0;
            mode_ = RECT;
        }
    }

    // reset vector from rectangular coordinates if form is
    // RECT (the default) or else from polar coordinates if
    // form is POL
    void Vector::reset(double n1, double n2, Mode form) {
        mode_ = form;
        if (form == RECT) {
            x_ = n1;
            y_ = n2;
        } else if (form == POL) {
            set_x(n1, n2);
            set_y(n1, n2);
        } else {
            cout << "Incorrect 3rd argument to Vector -- ";
            cout << "vector set to 0\n";
            x_ = y_ = 0.0;
            mode_ = RECT;
        }
    }

    // destructor
    Vector::~Vector() {};

    // calculates magitude from x and y
    double Vector::set_mag() const {
        return sqrt(x_ * x_ + y_ * y_);
    }

    // calculates angle from x and y
    double Vector::set_ang() const {
        if (x_ == 0.0 && y_ == 0.0) {
            return 0.0;
        } else {
            return atan2(y_, x_);
        }
    }

    // set to polar mode
    void Vector::polar_mode() {
        mode_ = POL;
    }

    // set to rectangular mode
    void Vector::rect_mode() {
        mode_ = RECT;
    }

    // operator overloading
    // add two Vectors
    Vector Vector::operator+(const Vector& b) const {
        return Vector(x_ + b.x_, y_ + b.y_);
    }

    // subtract Vector b from a
    Vector Vector::operator-(const Vector& b) const {
        return Vector(x_ - b.x_, y_ - b.y_);
    }

    // reverse sign of Vector
    Vector Vector::operator-() const {
        return Vector(-x_,- y_);
    }

    // multiply vector by n
    Vector Vector::operator*(double n) const {
        return Vector(n * x_, n * y_);
    }

    // friend methods
    // multiply n by Vector a
    Vector operator*(double n, const Vector& a) {
        return a * n;
    }

    // display rectangular coordinates if mode is RECT,
    // else display polar coordinates if mode is POL
    std::ostream& operator<<(std::ostream& os, const Vector& v) {
        if (v.mode_ == Vector::RECT) {
            os << "(x, y) = (" << v.x_ << ", " << v.y_ << ")";
        } else if (v.mode_ == Vector::POL) {
            os << "(m, a) = (" << v.set_mag() << ", "
               << v.set_ang() * Rad_to_deg << ")";
        } else {
            os << "Vector object mode is invalid";
        }
        return os;
    }

    // private methods
    // set x from polar coordinate
    void Vector::set_x(const double& mag, const double& ang) {
        x_ = mag * cos(ang);
    }

    // set y from polar coordinate
    void Vector::set_y(const double& mag, const double& ang) {
        y_ = mag * sin(ang);
    }
} // namespace vector