// bank_account.cpp -- implementing the BankAccount class
#include <iostream>
#include "bank_account.h"

BankAccount::BankAccount(const string& depositorName,
                         const string& accountNum,
                         double balance) {
    depositorName_ = depositorName;
    accountNum_ = accountNum;
    balance_ = balance;
}

BankAccount::BankAccount() {
    depositorName_ = "no name";
    accountNum_ = "none";
    balance_ = 0.0;
}

BankAccount::~BankAccount() {}

void BankAccount::showBankAccount() const {
    using std::cout;
    using std::ios_base;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(2);

    cout << "Show details:\n";
    cout << "\tThe depositor's name is " << depositorName_ << ".\n";
    cout << "\tHis/her account number is " << accountNum_ << ".\n";
    cout << "\tHis/her account balance is " << balance_ << ".\n";
    cout << "==============================================\n";
}

void BankAccount::deposite(const double& amount) {
    balance_ += amount;
}

void BankAccount::withdraw(const double& amount) {
    if (balance_ >= amount) {
        balance_ -= amount;
    }
    else {
        std::cout << "The amount is not valid, because the amount is larger "
                  << "than the account balance.\n";
    }
}