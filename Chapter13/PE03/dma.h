// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_

#include <iostream>

// base class
class DMAABC {
public:
    DMAABC(const char* l = "null", int r = 0);
    DMAABC(const DMAABC& abcs);
    virtual ~DMAABC();
    DMAABC& operator=(const DMAABC& abcs);
    virtual void View() = 0;
    friend std::ostream& operator<<(std::ostream& os, const DMAABC& abcs);
protected:
    char* label;
    int rating;
};

// class using DMA
class baseDMA : public DMAABC {
public:
    baseDMA(const char* l = "null", int r = 0);
    baseDMA(const baseDMA& bs);
    virtual ~baseDMA();
    baseDMA& operator=(const baseDMA& bs);
    virtual void View();
    friend std::ostream& operator<<(std::ostream& os, const baseDMA& bs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public DMAABC {
public:
    lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
    lacksDMA(const char* c, const DMAABC& ls);
    virtual void View();
    friend std::ostream& operator<<(std::ostream& os, const lacksDMA& ls);
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
};

// derived class with DMA
class hasDMA : public DMAABC {
public:
    hasDMA(const char* s = "none", const char* l = "null", int r = 0);
    hasDMA(const char* s, const DMAABC& hs);
    hasDMA(const hasDMA& hs);
    ~hasDMA();
    hasDMA& operator=(const hasDMA& hs);
    virtual void View();
    friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
private:
    char* style;
};

#endif