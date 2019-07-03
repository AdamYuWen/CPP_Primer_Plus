// Programming Exercise 7.3
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayBox(Box box) {
    cout << "The maker is " << box.maker << endl;
    cout << "The height is " << box.height << endl;
    cout << "The width is " << box.width << endl;
    cout << "The length is " << box.length << endl;
    cout << "The volume is " << box.volume << endl;
}

void setVolume(Box* ptrBox) {
    ptrBox->volume = ptrBox->length * ptrBox->width * ptrBox->height;
}

int main() {
    Box box = { "Box1", 1.1, 2.2, 3.3, 0.0 };
    Box* ptrBox = &box;

    cout << "Box 1 has following characters:" << endl;
    displayBox(box);

    cout << "The volume need to be calculated." << endl;
    cout << "After calculation, it becomes to: " << endl;
    setVolume(ptrBox);
    displayBox(box);

    return 0;
}
