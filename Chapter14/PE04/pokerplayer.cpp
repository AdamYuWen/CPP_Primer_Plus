// pokerplayer.cpp -- implementing class PokerPlayer
#include <cstdlib>
#include <ctime>
#include "pokerplayer.h"

PokerPlayer::PokerPlayer(std::string firstName, std::string lastName)
    : Person(firstName, lastName) {}

PokerPlayer::PokerPlayer(Person& person) : Person(person) {}

PokerPlayer::PokerPlayer() : Person() {}

PokerPlayer::~PokerPlayer() {}

int PokerPlayer::Draw() const {
    srand(time(0));
    return int(rand()) % 52;
}