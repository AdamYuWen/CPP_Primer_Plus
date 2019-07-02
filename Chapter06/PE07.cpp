// Programming Exercise 6.7
#include <iostream>
#include <string>
#include <cctype>

using std::string;

using std::cin;
using std::cout;
using std::endl;

int main() {
    string word;
    int numVowels = 0, numConsonants = 0, numOthers = 0;
    cout << "Enter words (q to quit): " << endl;
    while (cin >> word) {
        if (word == "q") {
            break;
        }
        else if (isalpha(word[0])) {
            switch (word[0]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++numVowels;
                break;
            default:
                ++numConsonants;
                break;
            }
        }
        else {
            ++numOthers;
        }
    }

    cout << numVowels << " words beginning with vowels\n";
    cout << numConsonants << " words beginning with consonants\n";
    cout << numOthers << " others\n";

    return 0;
}
