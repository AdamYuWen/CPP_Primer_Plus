// person.h -- class Person interface
#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
public:
    Person(std::string firstName, std::string lastName);
    Person(const char* firstName, const char* lastName);
    Person();
    virtual ~Person();
    virtual void Set();
    virtual void Show() const;
protected:
    void Get();
    void Data() const;
private:
    std::string firstName_;
    std::string lastName_;
};

#endif // PERSON_H_