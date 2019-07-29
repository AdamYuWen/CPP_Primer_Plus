// cd.h -- Cd class interface
#ifndef CD_H_
#define CD_H_

// base class
class Cd { // represents a CD disk
public:
    Cd(const char* performer, const char* label, int selections,
       double playtime);
    Cd(const Cd& cd);
    Cd();
    virtual ~Cd();
    virtual void Report() const; // reports all CD data
    virtual Cd& operator=(const Cd& cd);
private:
    char* performer_;
    char* label_;
    int selections_; // number of selections
    double playtime_; // playing time in minutes
};

#endif // CD_H_