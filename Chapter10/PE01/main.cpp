// Programming Exercise 10.1
#include <iostream>
#include "bank_account.h"


int main() {
    BankAccount obj1, obj2("Adam Yu Wen", "12345678", 999999);
    obj1.showBankAccount();
    obj2.showBankAccount();

    obj2.deposite(1);
    obj2.showBankAccount();

    obj2.withdraw(1000001);
    obj2.showBankAccount();

    obj2.withdraw(50000);
    obj2.showBankAccount();

    return 0;
}
