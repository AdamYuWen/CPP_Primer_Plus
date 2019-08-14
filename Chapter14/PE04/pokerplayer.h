// pokerplayer.h -- class PokerPlayer interface
#ifndef POKERPLAYER_H_
#define POKERPLAYER_H_

#include "person.h"

class PokerPlayer : virtual public Person {
public:
    PokerPlayer(std::string firstName, std::string lastName);
    PokerPlayer(Person& person);
    PokerPlayer();
    virtual ~PokerPlayer();
    int Draw() const;
};

#endif // POKERPLAYER_H_