// stack.cpp -- implementing the Stack class
#include "stack.h"

// constructor or default constructor
Stack::Stack(int n) {
    pitems = new Item[n];
    size = n;
    top = 0;
}

// copy constructor
Stack::Stack(const Stack& st) {
    pitems = new Item[st.size];
    size = st.size;
    top = st.top;
}

// destructor
Stack::~Stack() {
    delete[] pitems;
}

// assignment operator
Stack& Stack::operator=(const Stack& st) {
    if (this == &st) {
        return *this;
    } else {
        delete[] pitems;
        pitems = new Item[st.size];
        size = st.size;
        top = st.top;
    }
}

// if the Stack is empty or not
bool Stack::isempty() const {
    return top == 0;
}

// if the Stack is full or not
bool Stack::isfull() const {
    return top == size;
}

// add item to stack
bool Stack::push(const Item& item) {
    if (top < size) {
        pitems[top++] = item;
        return true;
    } else {
        return false;
    }
}

// pop top into item
bool Stack::pop(Item& item) {
    if (top > 0) {
        item = pitems[--top];
        return true;
    } else {
        return false;
    }
}

// overloaded operator <<
std::ostream& operator<<(std::ostream& os, const Stack& st) {
    std::cout << "The stack includes:\n";
    for (int i = 0; i < st.top; ++i) {
        std::cout << st.pitems[i] << " ";
    }
    std::cout << std::endl;
    return os;
}