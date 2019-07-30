// usedma.cpp -- inheritance, friends and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"

const int NUMDMA = 4;

int main() {
    using std::cout;
    using std::endl;

    // DMAABC* pDMA[NUMDMA];
    DMAABC* pDMA;
    pDMA = new baseDMA();
    pDMA->View();

    // for (int i = 0; i < NUMDMA; ++i) {
    //     delete pDMA;
    // }

    // baseDMA shirt("Portabelly", 8);
    // lacksDMA ballon("red", "Blimpo", 4);
    // hasDMA map("Mercator", "Buffalo Keys", 5);
    // cout << "Displaying baseDMA object:\n";
    // cout << shirt << endl;
    // cout << "Displaying lacksDMA object:\n";
    // cout << ballon << endl;
    // cout << "Displaying hasDMA object:\n";
    // cout << map << endl;
    // lacksDMA ballon2(ballon);
    // cout << "Result of lacksDMA copy:\n";
    // cout << ballon2 << endl;
    // hasDMA map2;
    // map2 = map;
    // cout << "Result of hasDMA assignment:\n";
    // cout << map2 << endl;
    return 0;
}