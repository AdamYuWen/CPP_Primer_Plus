// worker.cpp -- implementing class Worker
#include "worker.h"

Worker::Worker(const std::string& s, long n) : fullname(s), id(n) {}

Worker::Worker() : fullname("no one"), id(0L) {}

Worker::~Worker() {}

void Worker::Set() {
    std::cout << "Enter worker's full name: ";
    std::getline(std::cin, fullname);
    std::cout << "Enter worker's ID: ";
    std::cin >> id;
    while (std::cin.get() != '\n') {
        continue;
    }
}

void Worker::Show() const {
    std::cout << "Name: " << fullname << std::endl;
    std::cout << "Employee ID: " << id << std::endl;
}