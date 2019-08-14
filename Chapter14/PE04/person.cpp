// person.cpp -- implementing class Person
#include <iostream>
#include "person.h"

Person::Person(std::string firstName, std::string lastName)
    : firstName_(firstName), lastName_(lastName) {}

Person::Person(const char* firstName, const char* lastName)
    : firstName_(firstName), lastName_(lastName) {}

Person::Person() : firstName_("none"), lastName_("none") {}

Person::~Person() {}

void Person::Set() {
    Get();
}

void Person::Show() const {
    Person::Data();
}

void Person::Get() {
    std::cout << "Enter the person's first name: ";
    std::getline(std::cin, firstName_);
    std::cout << "Enter the person's last name: ";
    std::getline(std::cin, lastName_);
}

void Person::Data() const {
    std::cout << "First name: " << firstName_ << std::endl;
    std::cout << "Last name: " << lastName_ << std::endl;
}