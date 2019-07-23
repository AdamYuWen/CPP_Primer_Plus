// stock.h -- Stock class interface
#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>

class Stock {
public:
    Stock(const char* company,            // constructor
          long shares = 0,
          double shareVal = 0.0);
    Stock();                              // default constructor
    Stock(const Stock& stock);            // copy constuctor
    ~Stock();                             // destructor
    Stock& operator=(const Stock& stock); // assignment operator

    void Buy(long shares, double shareVal);  // buy stocks
    void Sell(long shares, double shareVal); // sell stocks
    void Update(double shareVal);            // update the total value
    const Stock& Topval(const Stock& stock) const; // compare total values

    friend std::ostream& operator<<(std::ostream& os, const Stock& stock);
private:
    char* company_;   // company name
    int shares_;      // the number of shares of the company
    double shareVal_; // the price of each share
    double totalVal_; // the total value of the stock
    void setTotalVal() { totalVal_ = shares_ * shareVal_; }
};

#endif // STOCK_H_