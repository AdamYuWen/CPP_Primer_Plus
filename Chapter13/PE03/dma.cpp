// dma.cpp -- dma class methods
#include <cstring>
#include "dma.h"

// base class
DMAABC::DMAABC(const char* l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

DMAABC::DMAABC(const DMAABC& rs) {
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

DMAABC::~DMAABC() {
    delete[] label;
}

void DMAABC::View() {
    using std::cout;
    using std::endl;
    cout << "DMAABC::View()\n";
    cout << "label: " << label << endl;
    cout << "rating: " << rating << endl;
}

std::ostream& operator<<(std::ostream& os, const DMAABC& rs) {
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// baseDMA methods
baseDMA::~baseDMA() {
    delete[] label;
}

baseDMA& baseDMA::operator=(const baseDMA& rs) {
    if (this ==&rs)
        return *this;
    delete[] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

void baseDMA::View() {
    DMAABC::View();
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs) {
    os << (const DMAABC&) rs;
    return os;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r)
    : DMAABC(l, r) {
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs)
    : DMAABC(rs) {
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls) {
    os << (const DMAABC&) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r)
    : DMAABC(l, r) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const baseDMA& rs)
    : DMAABC(rs) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs)
    : DMAABC(hs) { // invoke base class copy constructor
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
    delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs) {
    if (this == &hs)
        return *this;
    baseDMA::operator=(hs); // copy base portion
    delete[] style;        // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs) {
    os << (const DMAABC&) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}