// worker.h -- class Worker interface
#ifndef WORKER_H_
#define WORKER_H_

#include <iostream>
#include <string>

class Worker {
public:
    Worker(const std::string& s, long n);
    Worker();
    ~Worker();
    void Set();
    void Show() const;
private:
    std::string fullname;
    long id;
};

#endif // WORKER_H_