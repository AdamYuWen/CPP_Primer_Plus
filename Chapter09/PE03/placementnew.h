// placement.h -- for placement.cpp
#ifndef PLACEMENTNEW_H_
#define PLACEMENTNEW_H_

struct Chaff {
    char dross[20];
    int slag;
};

void setChaff(Chaff& chaff, char arr[], int n);

#endif /* PLACEMENTNEW_H_ */