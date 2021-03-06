// tv.h -- Tv and Remote classes
#ifndef TV_H_
#define TV_H_

#include <iostream>

class Remote;

class Tv {
public:
    enum { Off, On };
    enum { MinVal, MaxVal = 20 };
    enum { Antenna, Cable };
    enum { TV, DVD };

    friend class Remote; // Remote can access Tv private parts

    Tv(int s = Off, int mc = 125) : state(s), volume(5),
        maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV)? DVD : TV; }
    void settings() const; // display all settings

    void set_remote_mode(Remote& r);
    void show_remote_mode(Remote& r) const;
private:
    int state; // on or off
    int volume; // assumed to be digitized
    int maxchannel; // maximum number of channels
    int channel; // current channel setting
    int mode; // broadcast or cable
    int input; // TV or DVD
};

class Remote {
public:
    enum { Normal, Interactive };

    friend class Tv;

    Remote(int m = Tv::TV) : mode(m), remote_mode(Normal) {}
    bool volup(Tv& t) { return t.volup(); }
    bool voldown(Tv& t) { return t.voldown(); }
    void onoff(Tv& t) { t.onoff(); }
    void chanup(Tv& t) { t.chanup(); }
    void chandown(Tv& t) { t.chandown(); }
    void set_chan(Tv& t, int c) { t.channel = c; }
    void set_mode(Tv& t) { t.set_mode(); }
    void set_input(Tv& t) { t.set_input(); }

    void set_remote_mode(Tv& t);
    void show_remote_mode() const;
private:
    int mode; // controls TV or DVD
    int remote_mode; // Normal or Interactive
};

inline void Tv::set_remote_mode(Remote& r) {
    r.set_remote_mode(*this);
}

inline void Tv::show_remote_mode(Remote& r) const {
    std::cout << "Remote mode = "
              << (r.remote_mode == Remote::Normal ? "Normal" : "Interactive")
              << std::endl;
}

#endif