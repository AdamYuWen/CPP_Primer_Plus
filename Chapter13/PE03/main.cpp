// Programming Exercise 13.3
// usedma.cpp -- inheritance, friends and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"

const int NUMDMA = 4;

int main() {
    using std::cout;
    using std::endl;

    DMAABC* pDMA[NUMDMA];
    pDMA[0] = new baseDMA("portabelly", 8);
    pDMA[1] = new lacksDMA("red", "Blimpo", 4);
    pDMA[2] = new hasDMA("Mercator", "Buffalo Keys", 5);
    pDMA[3] = new baseDMA("2nd portabelly", 12);

    for (int i = 0; i < NUMDMA; ++i) {
        pDMA[i]->View();
        cout << endl;
    }
    cout << "=========================================\n";

    for (int i = 0; i < NUMDMA; ++i) {
        delete pDMA[i];
    }

    cout << "Test assignment operators and operator<<\n";
    baseDMA obj1;
    obj1 = baseDMA("portabelly", 8);
    cout << obj1 << endl;
    lacksDMA obj2;
    obj2 = lacksDMA("red", "Blimpo", 4);
    cout << obj2 << endl;
    hasDMA obj3;
    obj3 = hasDMA("Mercator", "Buffalo Keys", 5);
    cout << obj3 << endl;

    cout << "=========================================\n";
    cout << "Test copy constructors\n";
    baseDMA obj4 = obj1;
    cout << obj4 << endl;
    lacksDMA obj5 = obj2;
    cout << obj5 << endl;
    hasDMA obj6 = obj3;
    cout << obj6 << endl;

    cout << "=========================================\n";
    cout << "Test constructors with DMAABC\n";
    cout << "The following two functions are never used, becasue it is not\n"
         << "allowed to create an object of abstract class type.\n";
    cout << "lacksDMA::lacksDMA(const char* c, const DMAABC& ls) : DMAABC(ls)\n";
    cout << "hasDMA::hasDMA(const char* s, const DMAABC& hs) : DMAABC(hs)\n";

    cout << "Done.\n";

    return 0;
}