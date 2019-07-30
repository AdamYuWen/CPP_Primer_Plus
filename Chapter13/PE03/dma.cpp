// dma.cpp -- dma class methods
#include <cstring>
#include "dma.h"

// base class
DMAABC::DMAABC(const char* l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

DMAABC::DMAABC(const DMAABC& abcs) {
    label = new char[std::strlen(abcs.label) + 1];
    std::strcpy(label, abcs.label);
    rating = abcs.rating;
}

DMAABC::~DMAABC() {
    delete[] label;
}

void DMAABC::View() {
    using std::cout;
    using std::endl;
    cout << "label: " << label << endl;
    cout << "rating: " << rating << endl;
}

DMAABC& DMAABC::operator=(const DMAABC& abcs) {
    if (this == &abcs)
        return *this;
    delete[] label;
    label = new char[std::strlen(abcs.label) + 1];
    std::strcpy(label, abcs.label);
    rating = abcs.rating;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const DMAABC& abcs) {
    os << "Label: " << abcs.label << std::endl;
    os << "Rating: " << abcs.rating << std::endl;
    return os;
}

// baseDMA methods
baseDMA::baseDMA(const char*l, int r) : DMAABC(l, r) {}

baseDMA::baseDMA(const baseDMA& bs) : DMAABC(bs) {}

baseDMA::~baseDMA() {}

baseDMA& baseDMA::operator=(const baseDMA& bs) {
    DMAABC::operator=(bs);
}

void baseDMA::View() {
    DMAABC::View();
}

std::ostream& operator<<(std::ostream& os, const baseDMA& bs) {
    os << (const DMAABC&) bs;
    return os;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r) : DMAABC(l, r) {
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const DMAABC& ls) : DMAABC(ls) {
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() {
    DMAABC::View();
    std::cout << "color: " << color << std::endl;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls) {
    os << (const DMAABC&) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r) : DMAABC(l, r) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const DMAABC& hs) : DMAABC(hs) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs) : DMAABC(hs) {
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
    delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs) {
    if (this == &hs)
        return *this;
    DMAABC::operator=(hs); // copy base portion
    delete[] style;        // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

void hasDMA::View() {
    DMAABC::View();
    std::cout << "style: " << style << std::endl;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs) {
    os << (const DMAABC&) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}