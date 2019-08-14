// gunslinger.cpp -- implementing class Gunslinger
#include <iostream>
#include "gunslinger.h"

Gunslinger::Gunslinger(std::string firstName, std::string lastName,
                       double drawTime, int numNotches)
    : Person(firstName, lastName), drawTime_(drawTime),
      numNotches_(numNotches) {}

Gunslinger::Gunslinger(Person& person, double drawTime, int numNotches)
    : Person(person), drawTime_(drawTime), numNotches_(numNotches) {}

Gunslinger::Gunslinger(double drawTime, int numNotches)
    : Person(), drawTime_(drawTime), numNotches_(numNotches) {}

Gunslinger::~Gunslinger() {}

double Gunslinger::Draw() const {
    return drawTime_;
}

void Gunslinger::Set() {
    Person::Set();
    Get();
}

void Gunslinger::Show() const {
    Person::Data();
    std::cout << "Draw time: " << drawTime_ << std::endl;
    std::cout << "Number of notches: " << numNotches_ << std::endl;
}

void Gunslinger::Get() {
    std::cout << "Enter draw time: ";
    std::cin >> drawTime_;
    std::cout << "Enter the number of notches: ";
    std::cin >> numNotches_;
    while (std::cin.get() != '\n') {
        continue;
    }
}

void Gunslinger::Data() const {
    std::cout << "Gunslinger's draw time: " << drawTime_ << std::endl;
    std::cout << "The number of notches: " << numNotches_ << std::endl;
}