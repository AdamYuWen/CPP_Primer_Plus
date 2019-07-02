// Programming Exercise 7.2
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int NumScores = 10;

double* input() {
    double score;
    double scores[NumScores];
    double* ptrScores = scores;
    for (int i = 0; i < NumScores; ++i) {
        scores[i] = -1;
        cout << scores[i] << endl;
    }

    cout << "Enter up to 10 golf scores (to stop enter -1):" << endl;
    for (int i = 0; i < NumScores; ++i) {
        cin >> score;
        if (score >= 0) {
            scores[i] = score;
        }
        else {
            break;
        }
    }
    return ptrScores;
}

void display(double* ptrScores) {
    for (int i = 0; i < NumScores; ++i) {
        cout << *ptrScores << endl;
    //     if (*(ptrScores[i]) >= 0) {
    //         cout << *(ptrScores[i]) << " ";
    //     }
    }

    delete[] ptrScores;
}

int main() {
	double* ptr = input();
    display(ptr);

    return 0;
}