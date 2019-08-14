// baddude.h -- class BadDude interface
#ifndef BADDUDE_H_
#define BADDUDE_H_

#include "gunslinger.h"
#include "pokerplayer.h"

class BadDude : public Gunslinger, public PokerPlayer {
public:
    BadDude(std::string firstName, std::string lastName,
            double drawTime, int numNotches);
    BadDude();
    double Gdraw() const;
    int Cdraw() const;
    virtual void Show() const;
};

#endif // BADDUDE_H_