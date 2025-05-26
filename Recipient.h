#ifndef RECIPIENT_H
#define RECIPIENT_H

#include "Times.h"
#include <string>

class Recipient {
public:
    // constructor
    Recipient(const std::string &name, const int required);

private:
    std::string name;
    int required;
    Times times;
};

#endif
