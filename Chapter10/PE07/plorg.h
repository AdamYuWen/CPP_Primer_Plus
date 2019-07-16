// plorg.h -- Plorg interface
class Plorg {
private:
    static const int nameSize = 19;
    char name_[nameSize];
    int ci_;
public:
    Plorg();
    Plorg(const char* name, int ci = 50);
    ~Plorg();

    void setCI(const int& ci);
    void showPlorg() const;
};