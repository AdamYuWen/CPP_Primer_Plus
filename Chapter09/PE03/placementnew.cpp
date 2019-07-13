// placement.cpp -- use placement new
#include <iostream>
#include <cstring>
#include "placementnew.h"

void setChaff(Chaff& chaff, char arr[], int n) {
    strcpy(chaff.dross, arr);
    chaff.slag = n;
}
