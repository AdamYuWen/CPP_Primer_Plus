// cow.cpp -- implementing the Cow class
#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow() {
    std::cout << "default constructor:\n";
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt) {
    std::cout << "constructor:\n";
    std::strcpy(name, nm);

    int len = std::strlen(ho);
    hobby = new char[len + 1];
    std::strcpy(hobby, ho);

    weight = wt;
}

Cow::Cow(const Cow& c) {
    std::cout << "copy constructor:\n";

    std::strcpy(name, c.name);

    int len = std::strlen(c.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, c.hobby);

    weight = c.weight;
}

Cow::~Cow() {
    std::cout << "destructor: ";
    std::cout << "\"" << hobby << "\" removed.\n";
    delete[] hobby;
}

Cow& Cow::operator=(const Cow& c) {
    std::cout << "assignment operator:\n";
    if (this == &c) {
        return *this;
    } else {
        delete[] hobby;

        std::strcpy(name, c.name);

        int len = std::strlen(c.hobby);
        hobby = new char [len + 1];
        std::strcpy(hobby, c.hobby);

        weight = c.weight;

        return *this;
    }
}

void Cow::ShowCow() const {
    using std::cout;
    cout << "The cow's name is " << name << ".\n";
    cout << "The hobby is " << hobby << ".\n";
    cout << "The weight is " << weight << ".\n";
}