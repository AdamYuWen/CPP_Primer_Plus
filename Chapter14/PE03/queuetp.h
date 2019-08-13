// queuetp.h -- template class queuetp
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename Type>
class QueueTP {
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Type& val);
    bool dequeue(Type& val);
private:
    enum { Q_SIZE = 10 };
    struct Node {
        Type currVal;
        Node* next;
    };
    Node* front; // pointer to front of QueueTP
    Node* rear; // pointer to rear of QueueTP
    int numElements; // current number of QueueTP
    const int qsize; // maximum number of QueueTP
};

template <typename Type>
QueueTP<Type>::QueueTP(int qs) : qsize(qs) {
    front = rear = NULL;
    numElements = 0;
}

template <typename Type>
QueueTP<Type>::~QueueTP() {
    Node* temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <typename Type>
bool QueueTP<Type>::isempty() const {
    return numElements == 0;
}

template <typename Type>
bool QueueTP<Type>::isfull() const {
    return numElements == qsize;
}

template <typename Type>
int QueueTP<Type>::queuecount() const {
    return numElements;
}

template <typename Type>
bool QueueTP<Type>::enqueue(const Type& val) {
    if (isfull()) {
        return false;
    } else {
        Node* temp = new Node;
        temp->currVal = val;
        temp->next = NULL;
        if (front == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        ++numElements;
        return true;
    }
}

template <typename Type>
bool QueueTP<Type>::dequeue(Type& val) {
    if (isempty()) {
        return false;
    } else {
        val = front->currVal;
        Node* temp;
        temp = front;
        front = front->next;
        delete temp;
        --numElements;
        return true;
    }
}

#endif // QUEUETP_H_