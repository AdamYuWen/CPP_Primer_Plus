// gunslinger.h -- class Gunslinger interface
#ifndef GUNSLINGER_H_
#define GUNSLINGER_H_

#include "person.h"

class Gunslinger : virtual public Person {
public:
    Gunslinger(std::string firstName, std::string lastName,
               double drawTime = 0.0, int numNotches = 0);
    Gunslinger(Person& person, double drawTime = 0.0, int numNotches = 0);
    Gunslinger(double drawTime = 0.0, int numNotches = 0);
    virtual ~Gunslinger();
    double Draw() const;
    virtual void Set();
    virtual void Show() const;
protected:
    void Get();
    void Data() const;
private:
    double drawTime_;
    int numNotches_;
};

#endif // GUNSLINGER_H_