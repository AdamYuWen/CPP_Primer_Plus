// golf.h -- Golf interface
#ifndef GOLF_H
#define GOLF_H

const int arrSize = 10;

class Golf {
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf();
    Golf(const char* name, int hc);
    ~Golf();

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
    int setgolf();

// function resets handicap to new value
    void sethandicap(const int& hc);

// function displays contents of golf structure
    void showgolf() const;
};

#endif /* GOLF_H */