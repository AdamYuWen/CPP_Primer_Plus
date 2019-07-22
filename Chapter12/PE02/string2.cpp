// string2.cpp -- String class methods
#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

// initializing static class member
int String::num_strings = 0;

// class methods
// construct String from C string
String::String(const char* s) {
    len = std::strlen(s);    // set size
    str = new char[len + 1]; // allot storage
    std::strcpy(str, s);     // initialize pointer
    num_strings++;           // set object count
}

// default constructor
String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0'; // default string
    num_strings++;
}

// copy constructor
String::String(const String& st) {
    num_strings++;            // handle static member update
    len = st.len;             // same length
    str = new char [len + 1]; // allot space
    std::strcpy(str, st.str); // copy string to new location
}

// necessary destructor
String::~String() {
    --num_strings; // required
    delete[] str;  // required
}

// convert all alphabetic characters in a string to lowercase
void String::stringlow() {
    for (int i = 0; i < len; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

// convert all alphabetic characters in a string to uppercase
void String::stringup() {
    for (int i = 0; i < len; ++i) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

// the number of times the character appears
int String::has(const char c) const {
    int cnt = 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] == c) {
            ++cnt;
        }
    }
    return cnt;
}

// overloaded operator methods
// assign a String to a String
String& String::operator=(const String& st) {
    if (this == &st) {
        return *this;
    }
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// assign a C string to a String
String& String::operator=(const char* s) {
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// read-write char access for non-const String
char& String::operator[](int i) {
    return str[i];
}

// read-only char access for const String
const char& String::operator[](int i) const {
    return str[i];
}

// overloaded operator+ (String + String)
String& String::operator+(const String& st) {
    len += st.len;
    char* sumStr = new char[len + 1];
    std::strcat(sumStr, str);
    std::strcat(sumStr, st.str);
    delete[] str;
    str = sumStr;
    return *this;
}

// overloaded operator+ (String + C string)
String& String::operator+(const char* s) {
    len += std::strlen(s);
    char* sumStr = new char[len + 1];
    std::strcat(sumStr, str);
    std::strcat(sumStr, s);
    delete[] str;
    str = sumStr;
    return *this;
}

// overloaded operator friends
bool operator<(const String& st1, const String& st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2) {
    return st2 < st1;
}

bool operator==(const String& st1, const String& st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

// simple String output
ostream& operator<<(ostream& os, const String& st) {
    os << st.str;
    return os;
}

// quick and dirty String input
istream& operator>>(istream& is, String& st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) {
        st = temp;
    }
    while (is && is.get() != '\n') {
        continue;
    }
    return is;
}

// overloaded operator+ (C string + String)
String& operator+(const char* s, String& st) {
    st.len += std::strlen(s);
    char* sumStr = new char[st.len + 1];
    std::strcat(sumStr, s);
    std::strcat(sumStr, st.str);
    delete[] st.str;
    st.str = sumStr;
    return st;
}

// static method
int String::HowMany() {
    return num_strings;
}