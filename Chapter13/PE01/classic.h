// classic.h -- Classic class interface
#ifndef CLASSIC_H_
#define CLASSIC_H_

#include "cd.h"

class Classic : public Cd {
public:
    Classic(const char* primary, const char* performer, const char* label,
            int selections, double playtime);
    Classic(const Classic& classic);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    virtual Classic& operator=(const Classic& classic);
private:
    char primary_[100];
};

#endif // CLASSIC_H_