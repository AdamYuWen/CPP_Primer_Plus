// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_

#include <iostream>

// base class
class DMAABC {
public:
    DMAABC(const char* l = "null", int r = 0);
    DMAABC(const DMAABC& rs);
    virtual ~DMAABC();
    virtual void View() = 0;
    friend std::ostream& operator<<(std::ostream& os, const DMAABC& rs);
private:
    char* label;
    int rating;
};

// class using DMA
class baseDMA : public DMAABC {
public:
    baseDMA(const char* l = "null", int r = 0);
    baseDMA(const baseDMA& rs);
    virtual ~baseDMA();
    baseDMA& operator=(const baseDMA &rs);
    virtual void View();
    friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
private:
    char* label;
    int rating;
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public DMAABC {
public:
    lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
    lacksDMA(const char* c, const baseDMA& rs);
    virtual void View();
    friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
};

// derived class with DMA
class hasDMA : public DMAABC {
public:
    hasDMA(const char* s = "none", const char* l = "null", int r = 0);
    hasDMA(const char* s, const baseDMA& rs);
    hasDMA(const hasDMA& hs);
    ~hasDMA();
    hasDMA& operator=(const hasDMA& rs);
    virtual void View();
    friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
private:
    char* style;
};

#endif