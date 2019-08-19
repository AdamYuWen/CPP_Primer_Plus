// tv.cpp -- methods for the Tv class (Remote methods are inline)
#include <iostream>
#include "tv.h"

bool Tv::volup() {
    if (volume < MaxVal) {
        volume++;
        return true;
    }
    else {
        return false;
    }
}

bool Tv::voldown() {
    if (volume > MinVal) {
        volume--;
        return true;
    }
    else {
        return false;
    }
}

void Tv::chanup() {
    if (channel < maxchannel) {
        channel++;
    }
    else {
        channel = 1;
    }
}

void Tv::chandown() {
    if (channel > 1) {
        channel--;
    }
    else {
        channel = maxchannel;
    }
}

void Tv::settings() const {
    using std::cout;
    using std::endl;
    cout << "TV is " << (state == Off? "Off" : "On") << endl;
    if (state == On) {
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << (mode == Antenna ? "Antenna" : "Cable") << endl;
        cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
    }
}

void Remote::set_remote_mode(Tv& t) {
    if (t.state == Tv::On) {
        remote_mode = (remote_mode == Normal) ? Interactive : Normal;
    } else {
        std::cout << "The TV is OFF. Cannot set the remote mode.\n";
    }
}

void Remote::show_remote_mode() const {
    std::cout << "Remote mode = "
              << (remote_mode == Remote::Normal ? "Normal" : "Interactive")
              << std::endl;
}