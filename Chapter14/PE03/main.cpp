// Programming Exercise 14.3
#include <iostream>
#include "queuetp.h"
#include "worker.h"

const int WORKERSIZE = 3;

int main() {
    using std::cout;
    using std::endl;

    Worker* ptrWorker[WORKERSIZE];
    for (int i = 0; i < WORKERSIZE; ++i) {
        ptrWorker[i] = new Worker();
        ptrWorker[i]->Set();
    }

    for (int i = 0; i < WORKERSIZE; ++i) {
        ptrWorker[i]->Show();
    }

    cout << endl;
    QueueTP<Worker> queueWorker(WORKERSIZE);
    cout << "Is the queue empty?" << endl;
    cout << (queueWorker.isempty() ? "True" : "False") << endl;

    for (int i = 0; i < WORKERSIZE; ++i) {
        queueWorker.enqueue(*ptrWorker[i]);
    }
    cout << "What is number of elements in the queue?" << endl;
    cout << queueWorker.queuecount() << endl;
    cout << "Is the queue full?" << endl;
    cout << (queueWorker.isfull() ? "True" : "False") << endl;

    for (int i = 0; i < WORKERSIZE; ++i) {
        delete ptrWorker[i];
    }

    return 0;
}
