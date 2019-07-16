// plorg.cpp -- implementing the Plorg class
#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg() {
    strcpy(name_, "Plorga");
    ci_ = 0;
}

Plorg::Plorg(const char* name, int ci) {
    strcpy(name_, name);
    ci_ = ci;
}

Plorg::~Plorg() {}

void Plorg::setCI(const int& ci) {
    ci_ = ci;
}

void Plorg::showPlorg() const {
    std::cout << "The plorg's name is " << name_
              << " and its contentment index is " << ci_ << ".\n";
}
