// bank_account.h -- BankAccount interface
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <string>

using std::string;

class BankAccount {
private:
    string depositorName_;
    string accountNum_;
    double balance_;
public:
    BankAccount(const string& depositorName,
                const string& accountNum,
                double balance);
    BankAccount();
    ~BankAccount();
    void showBankAccount() const;
    void deposite(const double& amount);
    void withdraw(const double& amount);
};

#endif /* BANK_ACCOUNT_H */