// port.cpp -- implementing the class Port
#include <cstring>
#include "port.h"

// constructor and default constructor
Port::Port(const char* br, const char* st, int b) {
    brand = new char[std::strlen(br) + 1];
    std::strcpy(brand, br);
    std::strcpy(style, st);
    bottles = b;
}

// copy constructor
Port::Port(const Port& p) {
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

// overload assignment operator
Port& Port::operator=(const Port& p) {
    if (this == &p) {
        return *this;
    } else {
        delete[] brand;
        brand = new char[std::strlen(p.brand) + 1];
        std::strcpy(brand, p.brand);
        std::strcpy(style, p.style);
        bottles = p.bottles;
        return *this;
    }
}

// overload operator+=
Port& Port::operator+=(int b) {
    bottles += b;
    return *this;
}

// overload operator-=
Port& Port::operator-=(int b) {
    if (bottles >= b) {
        bottles -= b;
    } else {
        std::cout << "b is larger than the number of bottles. Set to 0";
        bottles = 0;
    }
    return *this;
}

// function Show
void Port::Show() const {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}

// overload operator<<
ostream& operator<<(ostream& os, const Port& p) {
    std::cout << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}