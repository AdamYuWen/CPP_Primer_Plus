// Programming Exercise 8.6
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

template <typename T>
T maxn(T arr[], int arrSize);

// Because char* arr[] is a pointer to pointers, const cannot be used.
// So, the previous template cannot have const either.
template <>
char* maxn<char*>(char* arr[], int arrSize);

int main() {
	int testInt[] = { 1, 6, 5, 2, 3, 4 };
    double testDouble[] = { 1.1, 4.4, 2.2, 3.3 };
    // 1. Should not have "const" in front of char* testChar[5].
    // Otherwise, it will call the first template.
    // 2. If (char*) are not added, a warning message will pop out as
    // "ISO C++ forbids converting a string constant to 'char*'".
    // To avoid the warning message, there are 3 solutions:
    // Solution 1: const char* testChar[5]...
    // Solution 2: string testChar[5]...
    // Solution 3: char* testChar[5] = (char*)"..."
    char* testChar[5] = { (char*)"apple",
                          (char*)"evening",
                          (char*)"daily",
                          (char*)"car",
                          (char*)"bed" };

    cout << "The largest number for the array of six int is "
         << maxn(testInt, 6) << ".\n";

    cout << "The largest number for the array of four doulbe is "
         << maxn(testDouble, 4) << ".\n";

    cout << "The longest string for the array of five char is "
         << maxn(testChar, 5) << ".\n";

    return 0;
}

template <typename T>
T maxn(T arr[], int arrSize) {
    cout << "General template is called." << endl;
    T maxNum = arr[0];
    for (int i = 0; i < arrSize; ++i) {
        maxNum = maxNum > arr[i] ? maxNum : arr[i];
    }
    return maxNum;
}

template <>
char* maxn<char*>(char* arr[], int arrSize) {
    cout << "Specialization is called." << endl;
    char* maxStr = arr[0];
    for (int i = 0; i < arrSize; ++i) {
        maxStr = strlen(maxStr) > strlen(arr[i]) ? maxStr : arr[i];
    }
    return maxStr;
}