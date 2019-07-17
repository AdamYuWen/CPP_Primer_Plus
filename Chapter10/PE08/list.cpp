// list.cpp -- impletmenting the List class
#include <iostream>
#include "list.h"

List::List() {
    listSize_ = 0;
}

List::List(Item* list, int listSize) {
    if (listSize <= maxListSize) {
        listSize_ = listSize;
         for (int i = 0; i < listSize; ++i) {
             list_[i] = list[i];
         }
    }
    else {
        std::cout << "Invalid input. The list size is larger than "
                  << maxListSize << ".\n";
    }
}

List::~List() {}

void List::add(const Item& node) {
    if (isfull()) {
        std::cout << "Can NOT add any more." << std::endl;
    }
    else {
        ++listSize_;
        list_[listSize_ - 1] = node;
    }
}

bool List::isempty() const {
    if (listSize_ == 0) {
        std::cout << "The list is empty." << std::endl;
        return true;
    }
    else {
        std::cout << "The list is NOT empty." << std::endl;
        return false;

    }
}

bool List::isfull() const {
    if (listSize_ == maxListSize) {
        std::cout << "The list is full." << std::endl;
        return true;
    }
    else {
        std::cout << "The list is NOT full." << std::endl;
        return false;
    }
}

void List::showList() const {
    using std::cout;

    cout << "The list has " << listSize_ << " elements.\n"
         << "They are";
    for (int i = 0; i < listSize_; ++i) {
        cout << " " << list_[i];
    }
    cout << ".\n";
}

void List::visit(void (*pf)(Item& node)) {
    for (int i = 0; i < listSize_; ++i) {
        (*pf)(list_[i]);
    }
}

void addone(Item& node) {
    node += 1;
}