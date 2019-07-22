// string2.h -- fixed and augmented string class definition
#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>

using std::ostream;
using std::istream;

class String {
public:
// constructors and other methods
    String(const char* s);  // constructor
    String();               // default constructor
    String(const String&);  // copy constructor
    ~String();              // destructor
// simple member methods
    void stringlow();
    void stringup();
    int has(const char) const;
// overloaded operator methods
    String& operator=(const String&);
    String& operator=(const char*);
    char& operator[](int i);
    const char& operator[](int i) const;
    String& operator+(const String&);
    String& operator+(const char*);
// overloaded operator friends
    friend bool operator<(const String& st, const String& st2);
    friend bool operator>(const String& st1, const String& st2);
    friend bool operator==(const String& st, const String& st2);
    friend ostream& operator<<(ostream& os, const String& st);
    friend istream& operator>>(istream& is, String& st);
    friend String& operator+(const char*, String&);
// get len function
    int length () const { return len; }
// static function
    static int HowMany();
private:
    static int num_strings; // number of objects
    static const int CINLIM = 80; // cin input limit
    char* str;              // pointer to string
    int len;                // length of string
};

#endif