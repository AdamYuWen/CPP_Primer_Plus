// stock.cpp -- implementing the Stock class
#include <cstring>
#include "stock.h"

// constructor
Stock::Stock(const char* company, long shares, double shareVal) {
    // std::cout << "contructor\n";
    int len = std::strlen(company);
    company_ = new char[len + 1];
    strcpy(company_, company);
    if (shares < 0) {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares_ = 0;
    } else {
        shares_ = shares;
    }
    shareVal_ = shareVal;
    setTotalVal();
}

// default constructor
Stock::Stock() {
    // std::cout << "default constructor\n";
    company_ = new char[1];
    company_[0] = '\0';
    shares_ = 0;
    shareVal_ = 0.0;
    totalVal_ = 0.0;
}

// copy constructor
Stock::Stock(const Stock& stock) {
    // std::cout << "copy constructor\n";
    int len = std::strlen(stock.company_);
    company_ = new char[len + 1];
    std::strcpy(company_, stock.company_);
    shares_ = stock.shares_;
    shareVal_ = stock.shareVal_;
    totalVal_ = stock.totalVal_;
}

// destructor
Stock::~Stock() {
    delete[] company_;
}

// assignment operator
Stock& Stock::operator=(const Stock& stock) {
    // std::cout << "assignment operator:\n";
    if (this == &stock) {
        return *this;
    } else {
        delete[] company_;
        int len = std::strlen(stock.company_);
        company_ = new char[len + 1];
        std::strcpy(company_, stock.company_);
        shares_ = stock.shares_;
        shareVal_ = stock.shareVal_;
        totalVal_ = stock.totalVal_;
        return *this;
    }
}

// buy stocks
void Stock::Buy(long shares, double shareVal) {
    if (shares < 0) {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    } else {
        shares_ += shares;
        shareVal_ = shareVal;
        setTotalVal();
    }
}

// sell stocks
void Stock::Sell(long shares, double shareVal) {
    if (shares < 0) {
        std::cout << "Number of shares sold can't be negative. "
                  << "Transaction is aborted.\n";
    } else if (shares > shares_) {
        std::cout << "You can't sell more than you have! "
                  << "Transaction is aborted.\n";
    } else {
        shares_ -= shares;
        shareVal_ = shareVal;
        setTotalVal();
    }
}

// update the total value
void Stock::Update(double shareVal) {
    shareVal_ = shareVal;
    setTotalVal();
}

// compare total values
const Stock& Stock::Topval(const Stock& stock) const {
    if (totalVal_ > stock.totalVal_) {
        return *this;
    } else {
        return stock;
    }
}

// overloaded operator <<
std::ostream& operator<<(std::ostream& os, const Stock& stock) {
    using std::cout;
    using std::ios_base;

    // set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << stock.company_ << "   Shares: " << stock.shares_ << '\n';
    cout << "   Share Price: $" << stock.shareVal_;

    // set format to #.##
    cout.precision(2);
    cout << "   Total Worth: $" << stock.totalVal_ << '\n';

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);

    return os;
}