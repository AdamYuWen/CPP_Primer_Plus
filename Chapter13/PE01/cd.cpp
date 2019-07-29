// cd.cpp -- implementing the Cd class
#include <iostream>
#include <cstring>
#include "cd.h"

// constructor
Cd::Cd(const char* performer, const char* label, int selections,
       double playtime) {
    std::strcpy(performer_, performer);
    std::strcpy(label_, label);
    selections_ = selections;
    playtime_ = playtime;
}

// copy constructor
Cd::Cd(const Cd& cd) {
    std::strcpy(performer_, cd.performer_);
    std::strcpy(label_, cd.label_);
    selections_ = cd.selections_;
    playtime_ = cd.playtime_;
}

// default constructor
Cd::Cd() {
    std::strcpy(performer_, "none");
    std::strcpy(label_, "none");
    selections_ = 0;
    playtime_ = 0.0;
}

// destrcutor
Cd::~Cd() {}

// reports all CD data
void Cd::Report() const {
    using std::cout;
    using std::endl;
    cout << "The performer is " << performer_ << ".\n";
    cout << "The label is " << label_ << ".\n";
    cout << "The selections is " << selections_ << ".\n";
    cout << "The playtime is " << playtime_ << ".\n";
}

// overload assignment operator
Cd& Cd::operator=(const Cd& cd) {
    if (this == &cd) {
        return *this;
    } else {
        std::strcpy(performer_, cd.performer_);
        std::strcpy(label_, cd.label_);
        selections_ = cd.selections_;
        playtime_ = cd.playtime_;
        return *this;
    }
}