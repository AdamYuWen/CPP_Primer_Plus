// classic.cpp -- implementing the Classic class
#include <iostream>
#include <cstring>
#include "classic.h"

// constructor
Classic::Classic(const char* primary, const char* performer,
                 const char* label, int selections, double playtime) :
    Cd(performer, label, selections, playtime) {
    // std::cout << "Classic constructor:\n";
    primary_ = new char[std::strlen(primary) + 1];
    std::strcpy(primary_, primary);

}

// copy constructor
Classic::Classic(const Classic& classic) :
    Cd(classic) {
    // std::cout << "Classic copy constructor:\n";
    primary_ = new char[std::strlen(classic.primary_) + 1];
    std::strcpy(primary_, classic.primary_);
}

// default constructor
Classic::Classic() :
    Cd() {
    // std::cout << "Classic default constructor:\n";
    primary_ = new char[5];
    std::strcpy(primary_, "none");
}

// destructor
Classic::~Classic() {
    delete primary_;
}

// reports all Classic data
void Classic::Report() const {
    // std::cout << "Classic report:\n";
    std::cout << "The primary is " << primary_ << ".\n";
    Cd::Report();
}

// overload assignment operator
Classic& Classic::operator=(const Classic& classic) {
    // std::cout << "Classic assignment operator:\n";
    if (this == &classic) {
        return *this;
    } else {
        Cd::operator=(classic);
        delete primary_;
        primary_ = new char[std::strlen(classic.primary_) + 1];
        std::strcpy(primary_, classic.primary_);
        return *this;
    }
}