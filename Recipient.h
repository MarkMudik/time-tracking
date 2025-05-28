#ifndef RECIPIENT_H
#define RECIPIENT_H
#include "Times.h"
#include <string>

class Recipient : public Times {
public:
    // constructor
    Recipient(const std::string &x, const int y);
private:
    std::string name;
    int required;
};

#endif
