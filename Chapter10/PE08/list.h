// list.h -- List interface
#ifndef LIST_H
#define LIST_H

typedef int Item;

class List {
private:
    static const int maxListSize = 5;
    Item list_[maxListSize];
    int listSize_;
public:
    List();
    List(Item* list, int listSize);
    ~List();

    void add(const Item& node);
    bool isempty() const;
    bool isfull() const;
    void showList() const;
    void visit(void (*pf)(Item& node));
};

void addone(Item& node);

#endif /* LIST_H */