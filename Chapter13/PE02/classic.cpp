// classic.cpp -- implementing the Classic class
#include <iostream>
#include <cstring>
#include "classic.h"

// constructor
Classic::Classic(const char* primary, const char* performer,
                 const char* label, int selections, double playtime) :
    Cd(performer, label, selections, playtime) {
    primary_ = new char[std::strlen(primary) + 1];
    std::strcpy(primary_, primary);

}

// copy constructor
Classic::Classic(const Classic& classic) :
    Cd(classic) {
    primary_ = new char[std::strlen(classic.primary_) + 1];
    std::strcpy(primary_, classic.primary_);
}

// default constructor
Classic::Classic() :
    Cd() {
    primary_ = new char[5];
    std::strcpy(primary_, "none");
}

// destructor
Classic::~Classic() {
    delete primary_;
}

// reports all Classic data
void Classic::Report() const {
    std::cout << "The primary is " << primary_ << ".\n";
    Cd::Report();
}

// overload assignment operator
Classic& Classic::operator=(const Classic& classic) {
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