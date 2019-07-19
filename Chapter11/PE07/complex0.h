// complex0.h -- Mycomplex class interface
#include <iostream>

class Mycomplex {
public:
    Mycomplex(double real, double imaginary);
    Mycomplex();
    ~Mycomplex();

    Mycomplex operator+(const Mycomplex& complex) const;
    Mycomplex operator-(const Mycomplex& complex) const;
    Mycomplex operator*(const Mycomplex& complex) const;
    Mycomplex operator*(double n) const;
    Mycomplex operator~() const;

    friend Mycomplex operator*(double n, const Mycomplex& complex);
    friend std::istream& operator>>(std::istream& is, Mycomplex& complex);
    friend std::ostream& operator<<(std::ostream& os, const Mycomplex& complex);
private:
    double real_;
    double imaginary_;
};