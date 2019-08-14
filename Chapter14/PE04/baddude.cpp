// baddude.cpp -- implementing class BadDude
#include <iostream>
#include "baddude.h"

BadDude::BadDude(std::string firstName, std::string lastName,
                 double drawTime, int numNotches)
    : Person(firstName, lastName),
      Gunslinger(firstName, lastName, drawTime, numNotches) {}

BadDude::BadDude() : Person(), Gunslinger() {}

double BadDude::Gdraw() const {
    return Gunslinger::Draw();
}

int BadDude::Cdraw() const {
    return PokerPlayer::Draw();
}

void BadDude::Show() const {
    Person::Data();
    Gunslinger::Data();
    std::cout << "Bad dude's draw time: " << Gdraw() << std::endl;
    std::cout << "The next card drawn: " << Cdraw() << std::endl;
}