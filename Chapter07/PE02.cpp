// Programming Exercise 7.2
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int NumScores = 10;

int input(double* ptrScores);
void display(double* ptrScores, int size);
double average(double* ptrScores, int size);

int main() {
    int size;
    double score, avg;
    double scores[NumScores];
    double* ptrScores = scores;

    size = input(ptrScores);
    display(ptrScores, size);
    avg = average(ptrScores, size);

    cout << "The average is " << avg << ".\n";

    return 0;
}

int input(double* ptrScores) {
    double score;
    int cnt = 0;

    // Read scores from user input
    cout << "Enter up to 10 golf scores (to stop enter a non-digit):" << endl;
    for (int i = 0; i < NumScores; ++i) {
        if (cin >> score) {
            ptrScores[i] = score;
            ++cnt;
        }
        else {
            break;
        }
    }
    return cnt;
}

void display(double* ptrScores, int size) {
    cout << "The scores are ";
    for (int i = 0; i < size; ++i) {
        if (ptrScores[i] >= 0) {
            cout << ptrScores[i] << " ";
        }
    }
    cout << endl;
}

double average(double* ptrScores, int size) {
    double sum = 0.0;

    for (int i = 0; i < size; ++i) {
        sum += ptrScores[i];
    }

    return sum / double(size);
}