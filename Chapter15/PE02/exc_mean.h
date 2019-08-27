// exc_mean.h -- exception classes for hmean(), gmean()
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <iostream>
#include <stdexcept>

using std::logic_error;

class bad_hmean : public logic_error {
public:
    explicit bad_hmean() : logic_error("hmean invalid arguments: a = -b\n") {};
};

class bad_gmean : public logic_error {
public:
    explicit bad_gmean() : logic_error("gmean() arguments should be >= 0\n") {};
};

#endif // EXC_MEAN_H_