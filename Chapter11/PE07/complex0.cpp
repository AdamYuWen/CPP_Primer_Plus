// complex0.cpp -- implementing Mycomplex class
#include "complex0.h"

// constructor
Mycomplex::Mycomplex(double real, double imaginary) {
    real_ = real;
    imaginary_ = imaginary;
}

// default constructor
Mycomplex::Mycomplex() {
    real_ = imaginary_ = 0.0;
}

// destructor
Mycomplex::~Mycomplex() {}

// operator loading addition
Mycomplex Mycomplex::operator+(const Mycomplex& complex) const {
    return Mycomplex(real_ + complex.real_, imaginary_ + complex.imaginary_);
}

// operator loading subtraction
Mycomplex Mycomplex::operator-(const Mycomplex& complex) const {
    return Mycomplex(real_ - complex.real_, imaginary_ - complex.imaginary_);
}

// operator loading multiplication (complex * complex)
Mycomplex Mycomplex::operator*(const Mycomplex& complex) const {
    return Mycomplex(real_ * complex.real_ -  imaginary_ * complex.imaginary_,
                     real_ * complex.imaginary_ + imaginary_ * complex.real_);
}

// operator loading multiplication (complex * n)
Mycomplex Mycomplex::operator*(double n) const {
    return Mycomplex(n * real_, n * imaginary_);
}

// operator loading multiplication (n * complex)
Mycomplex operator*(double n, const Mycomplex& complex) {
    return complex * n;
}

// operator loading conjugation
Mycomplex Mycomplex::operator~() const {
    return Mycomplex(real_, -imaginary_);
}

// operator loading istream
std::istream& operator>>(std::istream& is, Mycomplex& complex) {
    std::cout << "real: ";
    is >> complex.real_;
    std::cout << "imaginary: ";
    is >> complex.imaginary_;
    return is;
}

// operator loading ostream
std::ostream& operator<<(std::ostream& os, const Mycomplex& complex) {
    os << "(" << complex.real_ << "," << complex.imaginary_ << "i)";
    return os;
}