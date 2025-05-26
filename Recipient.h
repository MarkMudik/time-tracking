#ifndef RECIPIENT_H
#define RECIPIENT_H
#include "Times.h"
#include <string>

class Recipient {
public:
    // constructor
    Recipient(const std::string &x, const int y);
    // getter
    const Times& getTimes() const;
private:
    std::string name;
    int required;
    Times times;
};

#endif
