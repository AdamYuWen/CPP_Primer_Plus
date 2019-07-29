// cd.cpp -- implementing the Cd class
#include <iostream>
#include <cstring>
#include "cd.h"

// constructor
Cd::Cd(const char* performer, const char* label, int selections,
       double playtime) {
    // std::cout << "Cd constructor:\n";
    performer_ = new char[std::strlen(performer) + 1];
    std::strcpy(performer_, performer);
    label_ = new char[std::strlen(label) + 1];
    std::strcpy(label_, label);
    selections_ = selections;
    playtime_ = playtime;
}

// copy constructor
Cd::Cd(const Cd& cd) {
    // std::cout << "Cd copy constructor:\n";
    performer_ = new char[std::strlen(cd.performer_) + 1];
    std::strcpy(performer_, cd.performer_);
    label_ = new char[std::strlen(cd.label_) + 1];
    std::strcpy(label_, cd.label_);
    selections_ = cd.selections_;
    playtime_ = cd.playtime_;
}

// default constructor
Cd::Cd() {
    // std::cout << "Cd default constructor:\n";
    performer_ = new char[5];
    std::strcpy(performer_, "none");
    label_ = new char[5];
    std::strcpy(label_, "none");
    selections_ = 0;
    playtime_ = 0.0;
}

// destrcutor
Cd::~Cd() {
    // std::cout << "Cd destructor:\n";
    delete performer_;
    delete label_;
}

// reports all CD data
void Cd::Report() const {
    // std::cout << "Cd report:\n";
    using std::cout;
    using std::endl;
    cout << "The performer is " << performer_ << ".\n";
    cout << "The label is " << label_ << ".\n";
    cout << "The selections is " << selections_ << ".\n";
    cout << "The playtime is " << playtime_ << ".\n";
}

// overload assignment operator
Cd& Cd::operator=(const Cd& cd) {
    // std::cout << "Cd assignment operator:\n";
    if (this == &cd) {
        return *this;
    } else {
        delete performer_;
        delete label_;
        performer_ = new char[std::strlen(cd.performer_) + 1];
        std::strcpy(performer_, cd.performer_);
        label_ = new char[std::strlen(cd.label_) + 1];
        std::strcpy(label_, cd.label_);
        selections_ = cd.selections_;
        playtime_ = cd.playtime_;
        return *this;
    }
}