// Programming Exercise 15.1
//use_tv.cpp -- using the Tv and Remote classes
#include <iostream>
#include "tv.h"

int main() {
    using std::cout;

    Tv s42;
    cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();

    Remote grey;
    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n42\" settings after using remote:\n";
    s42.settings();

    cout << "\nTesting new functions:\n";
    s42.show_remote_mode(grey);
    s42.set_remote_mode(grey);
    s42.onoff();
    grey.set_remote_mode(s42);
    grey.show_remote_mode();

    return 0;
}