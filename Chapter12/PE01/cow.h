// cow.h -- Cow class interface
#ifndef COW_H_
#define COW_H_

class Cow {
public:
    Cow();
    Cow(const char* nm, const char* ho, double wt);
    Cow(const Cow& c);
    ~Cow();
    Cow& operator=(const Cow& c);
    void ShowCow() const;
private:
    char name[20];
    char* hobby;
    double weight;
};

#endif // COW_H_