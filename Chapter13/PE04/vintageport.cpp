// vintageport.cpp -- implementing class VintagePort
#include "vintageport.h"
#include <cstring>

// default constructor
VintagePort::VintagePort() : Port("none", "vintage", 0) {
    nickname = new char[10];
    std::strcpy(nickname, "The Noble");
    year = 0;
}

// constructor
VintagePort::VintagePort(const char* br, int b, const char* nn, int y)
    : Port(br, "vintage", b) {
    nickname = new char[std::strlen(nn)];
    std::strcpy(nickname, nn);
    year = y;
}

// copy constructor
VintagePort::VintagePort(const VintagePort& vp) : Port(vp) {
    nickname = new char[std::strlen(vp.nickname)];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

// overload assignment operator
VintagePort& VintagePort::operator=(const VintagePort& vp) {
    if (this == &vp) {
        return *this;
    } else {
        delete[] nickname;
        Port::operator=(vp);
        nickname = new char[std::strlen(vp.nickname)];
        std::strcpy(nickname, vp.nickname);
        year = vp.year;
        return *this;
    }
}

// function Show
void VintagePort::Show() const {
    Port::Show();
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Year: " << year << std::endl;
}

// overload operator<<
ostream& operator<<(ostream& os, const VintagePort& vp) {
    os << (const Port&) vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}